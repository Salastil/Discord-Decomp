package sd;

import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;

/* loaded from: classes3.dex */
public final class v implements Parcelable {
    public static final Parcelable.Creator<v> CREATOR = new u(1);

    /* renamed from: d, reason: collision with root package name */
    public final int f17940d;

    /* renamed from: e, reason: collision with root package name */
    public final int f17941e;

    /* renamed from: i, reason: collision with root package name */
    public final String f17942i;

    /* renamed from: v, reason: collision with root package name */
    public final String f17943v;

    /* renamed from: w, reason: collision with root package name */
    public final String f17944w;

    /* renamed from: x, reason: collision with root package name */
    public final String f17945x;

    public v(int i5, int i6, String str, String str2, String str3, String str4) {
        this.f17940d = i5;
        this.f17941e = i6;
        this.f17942i = str;
        this.f17943v = str2;
        this.f17944w = str3;
        this.f17945x = str4;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && v.class == obj.getClass()) {
            v vVar = (v) obj;
            if (this.f17940d == vVar.f17940d && this.f17941e == vVar.f17941e && TextUtils.equals(this.f17942i, vVar.f17942i) && TextUtils.equals(this.f17943v, vVar.f17943v) && TextUtils.equals(this.f17944w, vVar.f17944w) && TextUtils.equals(this.f17945x, vVar.f17945x)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = ((this.f17940d * 31) + this.f17941e) * 31;
        String str = this.f17942i;
        int hashCode = (i5 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f17943v;
        int hashCode2 = (hashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.f17944w;
        int hashCode3 = (hashCode2 + (str3 != null ? str3.hashCode() : 0)) * 31;
        String str4 = this.f17945x;
        return hashCode3 + (str4 != null ? str4.hashCode() : 0);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f17940d);
        parcel.writeInt(this.f17941e);
        parcel.writeString(this.f17942i);
        parcel.writeString(this.f17943v);
        parcel.writeString(this.f17944w);
        parcel.writeString(this.f17945x);
    }

    public v(Parcel parcel) {
        this.f17940d = parcel.readInt();
        this.f17941e = parcel.readInt();
        this.f17942i = parcel.readString();
        this.f17943v = parcel.readString();
        this.f17944w = parcel.readString();
        this.f17945x = parcel.readString();
    }
}
