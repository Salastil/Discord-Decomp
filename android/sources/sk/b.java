package sk;

import android.net.Uri;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class b extends d {

    /* renamed from: e, reason: collision with root package name */
    public final int f18038e;

    /* renamed from: i, reason: collision with root package name */
    public final Uri f18039i;

    public b(Uri uri, IOException iOException) {
        super(iOException);
        this.f18038e = 1;
        this.f18039i = uri;
    }

    @Override // java.lang.Throwable
    public final String getMessage() {
        if (this.f18038e != 0) {
            return "Failed to create media source due to a data source error";
        }
        throw null;
    }

    @Override // sk.d, java.lang.Throwable
    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.toString());
        sb2.append("\nFailed to create media source due to a data source error\nUri: ");
        if (this.f18038e == 0) {
            throw null;
        }
        sb2.append(this.f18039i);
        return sb2.toString();
    }
}
