package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;

/* loaded from: classes3.dex */
public enum c implements Parcelable {
    /* JADX INFO: Fake field, exist only in values array */
    PLATFORM("platform"),
    /* JADX INFO: Fake field, exist only in values array */
    CROSS_PLATFORM("cross-platform");


    @NonNull
    public static final Parcelable.Creator<c> CREATOR = new kf.b(11);

    /* renamed from: d, reason: collision with root package name */
    public final String f17285d;

    c(String str) {
        this.f17285d = str;
    }

    public static c a(String str) {
        for (c cVar : values()) {
            if (str.equals(cVar.f17285d)) {
                return cVar;
            }
        }
        throw new b(s4.h.f("Attachment ", str, " not supported"));
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f17285d;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f17285d);
    }
}
