package oe;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class g implements Parcelable {
    public static final Parcelable.Creator<g> CREATOR = new kf.b(8);

    /* renamed from: d, reason: collision with root package name */
    public int f15857d;

    /* renamed from: e, reason: collision with root package name */
    public int f15858e;

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("SavedState{mAnchorPosition=");
        sb2.append(this.f15857d);
        sb2.append(", mAnchorOffset=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f15858e, '}');
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f15857d);
        parcel.writeInt(this.f15858e);
    }
}
