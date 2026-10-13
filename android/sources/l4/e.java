package l4;

import android.os.Parcel;
import android.os.Parcelable;
import android.view.View;

/* loaded from: classes.dex */
public final class e extends View.BaseSavedState {
    public static final Parcelable.Creator<e> CREATOR = new kf.b(1);

    /* renamed from: d, reason: collision with root package name */
    public String f13714d;

    /* renamed from: e, reason: collision with root package name */
    public int f13715e;

    /* renamed from: i, reason: collision with root package name */
    public float f13716i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f13717v;

    /* renamed from: w, reason: collision with root package name */
    public String f13718w;

    /* renamed from: x, reason: collision with root package name */
    public int f13719x;

    /* renamed from: y, reason: collision with root package name */
    public int f13720y;

    @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeString(this.f13714d);
        parcel.writeFloat(this.f13716i);
        parcel.writeInt(this.f13717v ? 1 : 0);
        parcel.writeString(this.f13718w);
        parcel.writeInt(this.f13719x);
        parcel.writeInt(this.f13720y);
    }
}
