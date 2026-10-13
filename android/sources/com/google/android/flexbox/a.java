package com.google.android.flexbox;

import android.os.Parcel;
import android.os.Parcelable;
import android.view.ViewGroup;
import com.google.android.flexbox.FlexboxLayout;

/* loaded from: classes3.dex */
public final class a implements Parcelable.Creator {
    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        FlexboxLayout.LayoutParams layoutParams = new FlexboxLayout.LayoutParams(0, 0);
        layoutParams.f5600d = 1;
        layoutParams.f5601e = 0.0f;
        layoutParams.f5602i = 1.0f;
        layoutParams.f5603v = -1;
        layoutParams.f5604w = -1.0f;
        layoutParams.f5605x = -1;
        layoutParams.f5606y = -1;
        layoutParams.E = 16777215;
        layoutParams.F = 16777215;
        layoutParams.f5600d = parcel.readInt();
        layoutParams.f5601e = parcel.readFloat();
        layoutParams.f5602i = parcel.readFloat();
        layoutParams.f5603v = parcel.readInt();
        layoutParams.f5604w = parcel.readFloat();
        layoutParams.f5605x = parcel.readInt();
        layoutParams.f5606y = parcel.readInt();
        layoutParams.E = parcel.readInt();
        layoutParams.F = parcel.readInt();
        layoutParams.G = parcel.readByte() != 0;
        ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin = parcel.readInt();
        ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin = parcel.readInt();
        ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin = parcel.readInt();
        ((ViewGroup.MarginLayoutParams) layoutParams).topMargin = parcel.readInt();
        ((ViewGroup.MarginLayoutParams) layoutParams).height = parcel.readInt();
        ((ViewGroup.MarginLayoutParams) layoutParams).width = parcel.readInt();
        return layoutParams;
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        return new FlexboxLayout.LayoutParams[i5];
    }
}
