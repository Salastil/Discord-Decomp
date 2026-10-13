package oh;

import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import androidx.appcompat.widget.c3;

/* loaded from: classes3.dex */
public final class a0 extends d2.b {
    public static final Parcelable.Creator<a0> CREATOR = new c3(9);

    /* renamed from: i, reason: collision with root package name */
    public CharSequence f15886i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f15887v;

    public a0(Parcel parcel, ClassLoader classLoader) {
        super(parcel, classLoader);
        this.f15886i = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
        this.f15887v = parcel.readInt() == 1;
    }

    public final String toString() {
        return "TextInputLayout.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " error=" + ((Object) this.f15886i) + "}";
    }

    @Override // d2.b, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        TextUtils.writeToParcel(this.f15886i, parcel, i5);
        parcel.writeInt(this.f15887v ? 1 : 0);
    }
}
