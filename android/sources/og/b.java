package og;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class b implements Parcelable {
    public static final Parcelable.Creator<b> CREATOR = new kf.b(9);
    public Integer E;
    public String G;
    public Locale K;
    public CharSequence L;
    public CharSequence M;
    public int N;
    public int O;
    public Integer P;
    public Integer R;
    public Integer S;
    public Integer T;
    public Integer U;
    public Integer V;
    public Integer W;
    public Integer X;
    public Integer Y;
    public Integer Z;
    public Boolean a0;

    /* renamed from: b0, reason: collision with root package name */
    public Integer f15868b0;

    /* renamed from: d, reason: collision with root package name */
    public int f15869d;

    /* renamed from: e, reason: collision with root package name */
    public Integer f15870e;

    /* renamed from: i, reason: collision with root package name */
    public Integer f15871i;

    /* renamed from: v, reason: collision with root package name */
    public Integer f15872v;

    /* renamed from: w, reason: collision with root package name */
    public Integer f15873w;

    /* renamed from: x, reason: collision with root package name */
    public Integer f15874x;

    /* renamed from: y, reason: collision with root package name */
    public Integer f15875y;
    public int F = 255;
    public int H = -2;
    public int I = -2;
    public int J = -2;
    public Boolean Q = Boolean.TRUE;

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f15869d);
        parcel.writeSerializable(this.f15870e);
        parcel.writeSerializable(this.f15871i);
        parcel.writeSerializable(this.f15872v);
        parcel.writeSerializable(this.f15873w);
        parcel.writeSerializable(this.f15874x);
        parcel.writeSerializable(this.f15875y);
        parcel.writeSerializable(this.E);
        parcel.writeInt(this.F);
        parcel.writeString(this.G);
        parcel.writeInt(this.H);
        parcel.writeInt(this.I);
        parcel.writeInt(this.J);
        CharSequence charSequence = this.L;
        parcel.writeString(charSequence != null ? charSequence.toString() : null);
        CharSequence charSequence2 = this.M;
        parcel.writeString(charSequence2 != null ? charSequence2.toString() : null);
        parcel.writeInt(this.N);
        parcel.writeSerializable(this.P);
        parcel.writeSerializable(this.R);
        parcel.writeSerializable(this.S);
        parcel.writeSerializable(this.T);
        parcel.writeSerializable(this.U);
        parcel.writeSerializable(this.V);
        parcel.writeSerializable(this.W);
        parcel.writeSerializable(this.Z);
        parcel.writeSerializable(this.X);
        parcel.writeSerializable(this.Y);
        parcel.writeSerializable(this.Q);
        parcel.writeSerializable(this.K);
        parcel.writeSerializable(this.a0);
        parcel.writeSerializable(this.f15868b0);
    }
}
