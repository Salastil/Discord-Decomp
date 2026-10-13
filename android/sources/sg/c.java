package sg;

import android.os.Parcel;
import android.os.Parcelable;
import android.view.AbsSavedState;
import androidx.appcompat.widget.c3;
import com.google.android.material.bottomsheet.BottomSheetBehavior;

/* loaded from: classes3.dex */
public final class c extends d2.b {
    public static final Parcelable.Creator<c> CREATOR = new c3(10);

    /* renamed from: i, reason: collision with root package name */
    public final int f18013i;

    /* renamed from: v, reason: collision with root package name */
    public final int f18014v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f18015w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f18016x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f18017y;

    public c(Parcel parcel, ClassLoader classLoader) {
        super(parcel, classLoader);
        this.f18013i = parcel.readInt();
        this.f18014v = parcel.readInt();
        this.f18015w = parcel.readInt() == 1;
        this.f18016x = parcel.readInt() == 1;
        this.f18017y = parcel.readInt() == 1;
    }

    @Override // d2.b, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeInt(this.f18013i);
        parcel.writeInt(this.f18014v);
        parcel.writeInt(this.f18015w ? 1 : 0);
        parcel.writeInt(this.f18016x ? 1 : 0);
        parcel.writeInt(this.f18017y ? 1 : 0);
    }

    public c(BottomSheetBehavior bottomSheetBehavior) {
        super(AbsSavedState.EMPTY_STATE);
        this.f18013i = bottomSheetBehavior.N;
        this.f18014v = bottomSheetBehavior.f5959e;
        this.f18015w = bottomSheetBehavior.f5953b;
        this.f18016x = bottomSheetBehavior.I;
        this.f18017y = bottomSheetBehavior.J;
    }
}
