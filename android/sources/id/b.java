package id;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class b extends j {
    public static final Parcelable.Creator<b> CREATOR = new gd.a(8);

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f10614e;

    public b(byte[] bArr, String str) {
        super(str);
        this.f10614e = bArr;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && b.class == obj.getClass()) {
            b bVar = (b) obj;
            if (this.f10636d.equals(bVar.f10636d) && Arrays.equals(this.f10614e, bVar.f10614e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f10614e) + a3.e.d(527, 31, this.f10636d);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10636d);
        parcel.writeByteArray(this.f10614e);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(Parcel parcel) {
        super(r0);
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f10614e = parcel.createByteArray();
    }
}
