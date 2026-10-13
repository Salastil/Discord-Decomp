package android.support.v4.media;

import android.annotation.SuppressLint;
import android.os.Parcel;
import android.os.Parcelable;

@SuppressLint({"BanParcelableUsage"})
/* loaded from: classes.dex */
public final class RatingCompat implements Parcelable {
    public static final Parcelable.Creator<RatingCompat> CREATOR = new a(3);

    /* renamed from: d, reason: collision with root package name */
    public final int f707d;

    /* renamed from: e, reason: collision with root package name */
    public final float f708e;

    public RatingCompat(int i5, float f2) {
        this.f707d = i5;
        this.f708e = f2;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return this.f707d;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Rating:style=");
        sb2.append(this.f707d);
        sb2.append(" rating=");
        float f2 = this.f708e;
        sb2.append(f2 < 0.0f ? "unrated" : String.valueOf(f2));
        return sb2.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f707d);
        parcel.writeFloat(this.f708e);
    }
}
