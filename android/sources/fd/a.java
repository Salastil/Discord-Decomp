package fd;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.exoplayer2.Format;
import dd.b;
import hc.f0;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class a implements b {
    public static final Parcelable.Creator<a> CREATOR;
    public static final Format E;

    /* renamed from: y, reason: collision with root package name */
    public static final Format f8492y;

    /* renamed from: d, reason: collision with root package name */
    public final String f8493d;

    /* renamed from: e, reason: collision with root package name */
    public final String f8494e;

    /* renamed from: i, reason: collision with root package name */
    public final long f8495i;

    /* renamed from: v, reason: collision with root package name */
    public final long f8496v;

    /* renamed from: w, reason: collision with root package name */
    public final byte[] f8497w;

    /* renamed from: x, reason: collision with root package name */
    public int f8498x;

    static {
        f0 f0Var = new f0();
        f0Var.k = "application/id3";
        f8492y = new Format(f0Var);
        f0 f0Var2 = new f0();
        f0Var2.k = "application/x-scte35";
        E = new Format(f0Var2);
        CREATOR = new android.support.v4.media.a(28);
    }

    public a(String str, String str2, long j, long j5, byte[] bArr) {
        this.f8493d = str;
        this.f8494e = str2;
        this.f8495i = j;
        this.f8496v = j5;
        this.f8497w = bArr;
    }

    @Override // dd.b
    public final Format d() {
        String str = this.f8493d;
        str.getClass();
        switch (str) {
            case "urn:scte:scte35:2014:bin":
                return E;
            case "https://aomedia.org/emsg/ID3":
            case "https://developer.apple.com/streaming/emsg-id3":
                return f8492y;
            default:
                return null;
        }
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && a.class == obj.getClass()) {
            a aVar = (a) obj;
            if (this.f8495i == aVar.f8495i && this.f8496v == aVar.f8496v && d0.a(this.f8493d, aVar.f8493d) && d0.a(this.f8494e, aVar.f8494e) && Arrays.equals(this.f8497w, aVar.f8497w)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        if (this.f8498x == 0) {
            String str = this.f8493d;
            int hashCode = (527 + (str != null ? str.hashCode() : 0)) * 31;
            String str2 = this.f8494e;
            int hashCode2 = (hashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
            long j = this.f8495i;
            int i5 = (hashCode2 + ((int) (j ^ (j >>> 32)))) * 31;
            long j5 = this.f8496v;
            this.f8498x = Arrays.hashCode(this.f8497w) + ((i5 + ((int) (j5 ^ (j5 >>> 32)))) * 31);
        }
        return this.f8498x;
    }

    @Override // dd.b
    public final byte[] t() {
        if (d() != null) {
            return this.f8497w;
        }
        return null;
    }

    public final String toString() {
        return "EMSG: scheme=" + this.f8493d + ", id=" + this.f8496v + ", durationMs=" + this.f8495i + ", value=" + this.f8494e;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f8493d);
        parcel.writeString(this.f8494e);
        parcel.writeLong(this.f8495i);
        parcel.writeLong(this.f8496v);
        parcel.writeByteArray(this.f8497w);
    }

    public a(Parcel parcel) {
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f8493d = readString;
        this.f8494e = parcel.readString();
        this.f8495i = parcel.readLong();
        this.f8496v = parcel.readLong();
        this.f8497w = parcel.createByteArray();
    }
}
