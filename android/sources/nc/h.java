package nc;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import java.util.UUID;

/* loaded from: classes3.dex */
public final class h implements Parcelable {
    public static final Parcelable.Creator<h> CREATOR = new kf.b(5);

    /* renamed from: d, reason: collision with root package name */
    public int f15032d;

    /* renamed from: e, reason: collision with root package name */
    public final UUID f15033e;

    /* renamed from: i, reason: collision with root package name */
    public final String f15034i;

    /* renamed from: v, reason: collision with root package name */
    public final String f15035v;

    /* renamed from: w, reason: collision with root package name */
    public final byte[] f15036w;

    public h(UUID uuid, String str, String str2, byte[] bArr) {
        uuid.getClass();
        this.f15033e = uuid;
        this.f15034i = str;
        str2.getClass();
        this.f15035v = str2;
        this.f15036w = bArr;
    }

    public final boolean a(UUID uuid) {
        UUID uuid2 = hc.h.a;
        UUID uuid3 = this.f15033e;
        return uuid2.equals(uuid3) || uuid.equals(uuid3);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof h)) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        h hVar = (h) obj;
        return ke.d0.a(this.f15034i, hVar.f15034i) && ke.d0.a(this.f15035v, hVar.f15035v) && ke.d0.a(this.f15033e, hVar.f15033e) && Arrays.equals(this.f15036w, hVar.f15036w);
    }

    public final int hashCode() {
        if (this.f15032d == 0) {
            int hashCode = this.f15033e.hashCode() * 31;
            String str = this.f15034i;
            this.f15032d = Arrays.hashCode(this.f15036w) + a3.e.d((hashCode + (str == null ? 0 : str.hashCode())) * 31, 31, this.f15035v);
        }
        return this.f15032d;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        UUID uuid = this.f15033e;
        parcel.writeLong(uuid.getMostSignificantBits());
        parcel.writeLong(uuid.getLeastSignificantBits());
        parcel.writeString(this.f15034i);
        parcel.writeString(this.f15035v);
        parcel.writeByteArray(this.f15036w);
    }

    public h(Parcel parcel) {
        this.f15033e = new UUID(parcel.readLong(), parcel.readLong());
        this.f15034i = parcel.readString();
        String readString = parcel.readString();
        int i5 = ke.d0.a;
        this.f15035v = readString;
        this.f15036w = parcel.createByteArray();
    }
}
