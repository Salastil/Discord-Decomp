package oe;

import android.view.View;
import com.google.android.flexbox.FlexLine;
import java.util.List;

/* loaded from: classes3.dex */
public interface a {
    int getAlignContent();

    int getAlignItems();

    int getChildHeightMeasureSpec(int i5, int i6, int i10);

    int getChildWidthMeasureSpec(int i5, int i6, int i10);

    int getDecorationLengthCrossAxis(View view);

    int getDecorationLengthMainAxis(View view, int i5, int i6);

    int getFlexDirection();

    View getFlexItemAt(int i5);

    int getFlexItemCount();

    List getFlexLinesInternal();

    int getFlexWrap();

    int getLargestMainSize();

    int getMaxLine();

    int getPaddingBottom();

    int getPaddingEnd();

    int getPaddingLeft();

    int getPaddingRight();

    int getPaddingStart();

    int getPaddingTop();

    View getReorderedFlexItemAt(int i5);

    int getSumOfCrossSize();

    boolean isMainAxisDirectionHorizontal();

    void onNewFlexItemAdded(View view, int i5, int i6, FlexLine flexLine);

    void onNewFlexLineAdded(FlexLine flexLine);

    void setFlexLines(List list);

    void updateViewCache(int i5, View view);
}
