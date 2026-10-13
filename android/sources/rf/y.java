package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class y extends cf.a {

    @NonNull
    public static final Parcelable.Creator<y> CREATOR = new kf.b(25);

    /* renamed from: d, reason: collision with root package name */
    public final String f17380d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17381e;

    /* renamed from: i, reason: collision with root package name */
    public final String f17382i;

    public y(String str, String str2, String str3) {
        bf.t.g(str);
        this.f17380d = str;
        bf.t.g(str2);
        this.f17381e = str2;
        this.f17382i = str3;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof y)) {
            return false;
        }
        y yVar = (y) obj;
        return bf.t.j(this.f17380d, yVar.f17380d) && bf.t.j(this.f17381e, yVar.f17381e) && bf.t.j(this.f17382i, yVar.f17382i);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17380d, this.f17381e, this.f17382i});
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("PublicKeyCredentialRpEntity{\n id='");
        sb2.append(this.f17380d);
        sb2.append("', \n name='");
        sb2.append(this.f17381e);
        sb2.append("', \n icon='");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f17382i, "'}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.D(this.f17380d, parcel, 2);
        ys.l.D(this.f17381e, parcel, 3);
        ys.l.D(this.f17382i, parcel, 4);
        ys.l.J(I, parcel);
    }
}
