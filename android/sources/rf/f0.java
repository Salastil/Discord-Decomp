package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;

/* loaded from: classes3.dex */
public enum f0 implements Parcelable {
    /* JADX INFO: Fake field, exist only in values array */
    PRESENT("present"),
    /* JADX INFO: Fake field, exist only in values array */
    SUPPORTED("supported"),
    /* JADX INFO: Fake field, exist only in values array */
    NOT_SUPPORTED("not-supported");


    @NonNull
    public static final Parcelable.Creator<f0> CREATOR = new s0(0);

    /* renamed from: d, reason: collision with root package name */
    public final String f17302d;

    f0(String str) {
        this.f17302d = str;
    }

    public static f0 a(String str) {
        for (f0 f0Var : values()) {
            if (str.equals(f0Var.f17302d)) {
                return f0Var;
            }
        }
        throw new g0(s4.h.f("TokenBindingStatus ", str, " not supported"));
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f17302d;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f17302d);
    }
}
