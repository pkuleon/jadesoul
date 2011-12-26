String.prototype.$charWidthAt=function(index) {
	if (this.length<1) {
		return 0;
	}
	if (!index) {
		index=0;
	}
	var charCode=this.charCodeAt(index);
	if (charCode<32) {
		return 0;
	}
	if ((charCode>=4352&&charCode<=4447)||(charCode==9001||charCode==9002)||(charCode>=11904&&charCode<=12350)||(charCode>=12353&&charCode<=19893)||(charCode>=19968&&charCode<=42182)||(charCode>=44032&&charCode<=57343)||(charCode>=63744&&charCode<=64217)||(charCode>=65040&&charCode<=65049)||(charCode>=65072&&charCode<=65131)||(charCode>=65281&&charCode<=65376)||(charCode>=65504&&charCode<=65518)) {
		return 2;
	}
	return 1;
};
