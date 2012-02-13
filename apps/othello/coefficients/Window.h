
///////////////////////////////////
// Window structure
// values are usable if the number of empties is within [begin,end)
///////////////////////////////////

struct CWindow {
public:
	int begin, end;

	int Width() const;
	bool Valid(int nEmpty) const;
};

inline int CWindow::Width() const {
	return end-begin;
}

inline bool CWindow::Valid(int nEmpty) const {
	return nEmpty>=begin && nEmpty<end;
}

