package oe;

import android.os.Parcel;
import android.os.Parcelable;
import android.view.ViewGroup;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes3.dex */
public final class e extends RecyclerView.LayoutParams implements b {
    public static final Parcelable.Creator<e> CREATOR = new kf.b(7);
    public float E;
    public int F;
    public int G;
    public int H;
    public int I;
    public boolean J;

    /* renamed from: w, reason: collision with root package name */
    public float f15846w;

    /* renamed from: x, reason: collision with root package name */
    public float f15847x;

    /* renamed from: y, reason: collision with root package name */
    public int f15848y;

    public e(int i5) {
        super(-2, i5);
        this.f15846w = 0.0f;
        this.f15847x = 1.0f;
        this.f15848y = -1;
        this.E = -1.0f;
        this.H = 16777215;
        this.I = 16777215;
    }

    @Override // oe.b
    public final int b() {
        return this.f15848y;
    }

    @Override // oe.b
    public final float c() {
        return this.f15847x;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // oe.b
    public final int e() {
        return this.F;
    }

    @Override // oe.b
    public final void f(int i5) {
        this.F = i5;
    }

    @Override // oe.b
    public final int g() {
        return ((ViewGroup.MarginLayoutParams) this).bottomMargin;
    }

    @Override // oe.b
    public final int getHeight() {
        return ((ViewGroup.MarginLayoutParams) this).height;
    }

    @Override // oe.b
    public final int getOrder() {
        return 1;
    }

    @Override // oe.b
    public final int getWidth() {
        return ((ViewGroup.MarginLayoutParams) this).width;
    }

    @Override // oe.b
    public final int j() {
        return ((ViewGroup.MarginLayoutParams) this).leftMargin;
    }

    @Override // oe.b
    public final int k() {
        return ((ViewGroup.MarginLayoutParams) this).topMargin;
    }

    @Override // oe.b
    public final void l(int i5) {
        this.G = i5;
    }

    @Override // oe.b
    public final float m() {
        return this.f15846w;
    }

    @Override // oe.b
    public final float n() {
        return this.E;
    }

    @Override // oe.b
    public final int p() {
        return ((ViewGroup.MarginLayoutParams) this).rightMargin;
    }

    @Override // oe.b
    public final int q() {
        return this.G;
    }

    @Override // oe.b
    public final boolean r() {
        return this.J;
    }

    @Override // oe.b
    public final int s() {
        return this.I;
    }

    @Override // oe.b
    public final int u() {
        return this.H;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeFloat(this.f15846w);
        parcel.writeFloat(this.f15847x);
        parcel.writeInt(this.f15848y);
        parcel.writeFloat(this.E);
        parcel.writeInt(this.F);
        parcel.writeInt(this.G);
        parcel.writeInt(this.H);
        parcel.writeInt(this.I);
        parcel.writeByte(this.J ? (byte) 1 : (byte) 0);
        parcel.writeInt(((ViewGroup.MarginLayoutParams) this).bottomMargin);
        parcel.writeInt(((ViewGroup.MarginLayoutParams) this).leftMargin);
        parcel.writeInt(((ViewGroup.MarginLayoutParams) this).rightMargin);
        parcel.writeInt(((ViewGroup.MarginLayoutParams) this).topMargin);
        parcel.writeInt(((ViewGroup.MarginLayoutParams) this).height);
        parcel.writeInt(((ViewGroup.MarginLayoutParams) this).width);
    }
}
