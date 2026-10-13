package jk;

import android.graphics.Paint;
import android.view.View;

/* loaded from: classes3.dex */
public interface e {
    int getValue();

    View getView();

    void setDisplayedValues(String[] strArr);

    void setDividerColor(String str);

    void setMaxValue(int i5);

    void setMinValue(int i5);

    void setOnValueChangeListenerInScrolling(d dVar);

    void setOnValueChangedListener(c cVar);

    void setTextAlign(Paint.Align align);

    void setTextColor(String str);

    void setValue(int i5);

    void setVisibility(int i5);

    void setWrapSelectorWheel(boolean z5);
}
