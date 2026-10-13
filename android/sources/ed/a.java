package ed;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class a implements dd.b {
    public static final Parcelable.Creator<a> CREATOR = new android.support.v4.media.a(25);

    /* renamed from: d, reason: collision with root package name */
    public final int f8072d;

    /* renamed from: e, reason: collision with root package name */
    public final String f8073e;

    public a(int i5, String str) {
        this.f8072d = i5;
        this.f8073e = str;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Ait(controlCode=");
        sb2.append(this.f8072d);
        sb2.append(",url=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f8073e, ")");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f8073e);
        parcel.writeInt(this.f8072d);
    }
}
