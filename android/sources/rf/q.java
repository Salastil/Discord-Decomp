package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Locale;

/* loaded from: classes3.dex */
public enum q implements Parcelable {
    NOT_SUPPORTED_ERR(9),
    INVALID_STATE_ERR(11),
    SECURITY_ERR(18),
    NETWORK_ERR(19),
    ABORT_ERR(20),
    TIMEOUT_ERR(23),
    ENCODING_ERR(27),
    UNKNOWN_ERR(28),
    CONSTRAINT_ERR(29),
    DATA_ERR(30),
    NOT_ALLOWED_ERR(35),
    ATTESTATION_NOT_PRIVATE_ERR(36);


    @NonNull
    public static final Parcelable.Creator<q> CREATOR = new s0(20);

    /* renamed from: d, reason: collision with root package name */
    public final int f17345d;

    q(int i5) {
        this.f17345d = i5;
    }

    public static q a(int i5) {
        for (q qVar : values()) {
            if (i5 == qVar.f17345d) {
                return qVar;
            }
        }
        Locale locale = Locale.US;
        throw new p(s4.h.e(i5, "Error code ", " is not supported"));
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f17345d);
    }
}
