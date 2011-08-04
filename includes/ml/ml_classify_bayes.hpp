#ifndef ML_CLASSIFY_BAYES_HPP_BY_JADESOUL
#define ML_CLASSIFY_BAYES_HPP_BY_JADESOUL
/**
 * File: ml_classify_bayes.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-06-27 02:02:07.329000
 * Written In: Peking University, beijing, China
 */

#include "ml_types.hpp"


template<class T>
class FrequencyDistribution {
public:
	vector<T> values;
	set<T> range;
	vector<T> unique_values;
	map<T, uint> freqmap;
	
	FrequencyDistribution() {}
	FrequencyDistribution(const vector<T>& data):values(data) {
		uint n=values.size();
		for_n(i, n) range.insert(values[i]);
		uint i=0;
		for_iter(it, set<T>, range) unique_values.push_back(*it);
		n=unique_values.size();
		for_n(i, n) freqmap[unique_values[i]]=0;
		n=values.size();
		for_n(i, n) ++freqmap[values[i]];
	}
};

template<class T>
class ProbabilityDistribution : public FrequencyDistribution<T> {
public:
	map<T, float> probdist;
	ProbabilityDistribution() {}
	ProbabilityDistribution(const vector<T>& data):FrequencyDistribution<T>(data) {
		uint n=unique_values.size(), total=values.size();
		for_n(i, n) {
			T v=unique_values[i];
			probdist[v]=freqmap[v]/total;
		}
	}
};

template<class Feature=uint, class Class=uint>
class Classifier {
public:
	typedef vector<Feature> FeatureSet;
	class FeatureMeta {
	public:
		string name;
		double weight;
		bool discrete;//or continuous
		set<Feature> valueSet;
	};
	
	class ClassMeta {
	public:
		string name;
		set<Feature> valueSet;
	};
	
	typedef vector<FeatureMeta> FeatureMetaSet;//should be same size as FeatureSet
	
	class Meta {//should be same size as Sample
	public:
		FeatureMetaSet	featureMetas;
		ClassMeta		labelMeta;
	};
	
	class Sample {
	public:
		FeatureSet X;
		Class y;
	};
	
	class DataSet {
	public:
		vector<Sample> samples;
		
		void from(datatable<Feature>& dt) {
			samples.clear();
			uint rows=dt.row();
			for_n(i, rows) {
				FeatureSet X(dt.rowbegin(i), dt.rowlast(i));
				Class y=*dt.rowlast(i);
				Sample s(X, y);
				samples.push_back(s);
			}
		}
		
		vector<Class> allValuesOfClass() {
			vector<Class> ls;
			uint n=samples.size();
			for_n(i, n) ls.push_back(samples[i].y);
			return ls;
		}
		
		vector<Feature> allValuesOfFeature(uint id) {
			vector<Feature> fs;
			uint n=samples.size();
			for_n(i, n) fs.push_back(samples[i].X[id]);
			return fs;
		}
		
		
	}
	
	Classifier() {
		Sample S;
		FeatureSet X;
		Feature x;
		Class y;
	}
	
	virtual void train() {}
	virtual void test() {}
	virtual Class predict(FeatureSet& X) {}
	
	void train(datatable<Feature>& dt) {
		this->trainData.from(dt);
		train();
	}
	
	void train(DataSet& data) {
		this->trainData=data;
		train();
	}
	
	void test(datatable<Feature>& dt) {
		this->testData.from(dt);
		test();
	}
	
	void test(DataSet& data) {
		this->testData=data;
		test();
	}

	bool validate(Sample& S) {
		return predict(S.X)==S.y;
	}
	
protected:
	DataSet trainData, testData;
	Meta meta;
	
	//model
	ProbabilityDistribution<Class> classProbDist;
	vector<Class> classList;
	vector<ProbabilityDistribution<Feature> > featureProbDists;
	vector<Feature> featureLists;
	vector<> likehoodProbDist
	//TODO
	
	
};

// typedef uint Feature;
// typedef uint Class;


template<class Feature=uint, class Class=uint>
class NaiveBayesClassifier : public Classifier<Feature, Class> {
public:
	virtual void train() {
		DataSet& data=trainData;
		classProbDist=ProbabilityDistribution<Class>(trainData.allValuesOfClass());
		classList=classProbDist.unique_values;
		uint classCnt=classList.size();
		
		featureProbDists.clear();
		uint featureCnt=data.samples[0].X.size();
		for_n(i, featureCnt) featureProbDists.push_back(ProbabilityDistribution<Feature>(trainData.allValuesOfFeature(i)));
		
		featureLists.clear();
		for_n(i, featureCnt) featureLists.push_back(featureProbDists[i].unique_values);
		
		classList
	}
	virtual void test() {}
	virtual Class predict(FeatureSet& X) {}
};


#endif /* ML_CLASSIFY_BAYES_HPP_BY_JADESOUL */

