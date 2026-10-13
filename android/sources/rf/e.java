package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;

/* loaded from: classes3.dex */
public enum e implements Parcelable {
    NONE("none"),
    /* JADX INFO: Fake field, exist only in values array */
    INDIRECT("indirect"),
    /* JADX INFO: Fake field, exist only in values array */
    DIRECT("direct");


    @NonNull
    public static final Parcelable.Creator<e> CREATOR = new s0(1);

    /* renamed from: d, reason: collision with root package name */
    public final String f17291d;

    e(String str) {
        this.f17291d = str;
    }

    public static e a(String str) {
        for (e eVar : values()) {
            if (str.equals(eVar.f17291d)) {
                return eVar;
            }
        }
        throw new d(s4.h.f("Attestation conveyance preference ", str, " not supported"));
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f17291d;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f17291d);
    }
}
