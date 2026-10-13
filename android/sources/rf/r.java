package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class r extends cf.a {

    @NonNull
    public static final Parcelable.Creator<r> CREATOR = new s0(21);

    /* renamed from: d, reason: collision with root package name */
    public final String f17348d;

    public r(String str) {
        bf.t.g(str);
        this.f17348d = str;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof r) {
            return this.f17348d.equals(((r) obj).f17348d);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17348d});
    }

    public final String toString() {
        return com.discord.chat.bridge.botuikit.a.j(new StringBuilder("FidoAppIdExtension{appid='"), this.f17348d, "'}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.D(this.f17348d, parcel, 2);
        ys.l.J(I, parcel);
    }
}
