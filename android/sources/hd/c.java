package hd;

import a3.e;
import android.os.Parcel;
import android.os.Parcelable;
import hc.u0;
import java.util.Arrays;
import k0.d;

/* loaded from: classes3.dex */
public final class c implements dd.b {
    public static final Parcelable.Creator<c> CREATOR = new gd.a(3);

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f9956d;

    /* renamed from: e, reason: collision with root package name */
    public final String f9957e;

    /* renamed from: i, reason: collision with root package name */
    public final String f9958i;

    public c(String str, String str2, byte[] bArr) {
        this.f9956d = bArr;
        this.f9957e = str;
        this.f9958i = str2;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || c.class != obj.getClass()) {
            return false;
        }
        return Arrays.equals(this.f9956d, ((c) obj).f9956d);
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f9956d);
    }

    @Override // dd.b
    public final void o(u0 u0Var) {
        String str = this.f9957e;
        if (str != null) {
            u0Var.a = str;
        }
    }

    public final String toString() {
        return d.m(e.t("ICY: title=\"", this.f9957e, "\", url=\"", this.f9958i, "\", rawMetadata.length=\""), this.f9956d.length, "\"");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeByteArray(this.f9956d);
        parcel.writeString(this.f9957e);
        parcel.writeString(this.f9958i);
    }

    public c(Parcel parcel) {
        byte[] createByteArray = parcel.createByteArray();
        createByteArray.getClass();
        this.f9956d = createByteArray;
        this.f9957e = parcel.readString();
        this.f9958i = parcel.readString();
    }
}
