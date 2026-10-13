package ve;

import android.util.Log;
import bf.t;
import com.google.android.gms.common.api.Status;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;

/* loaded from: classes3.dex */
public final class c implements Runnable {

    /* renamed from: i, reason: collision with root package name */
    public static final a1.d f19390i = new a1.d("RevokeAccessOperation", new String[0]);

    /* renamed from: d, reason: collision with root package name */
    public final String f19391d;

    /* renamed from: e, reason: collision with root package name */
    public final af.j f19392e;

    public c(String str) {
        t.d(str);
        this.f19391d = str;
        this.f19392e = new af.j(null);
    }

    @Override // java.lang.Runnable
    public final void run() {
        a1.d dVar = f19390i;
        Status status = Status.f5656y;
        try {
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL("https://accounts.google.com/o/oauth2/revoke?token=" + this.f19391d).openConnection();
            httpURLConnection.setRequestProperty("Content-Type", "application/x-www-form-urlencoded");
            int responseCode = httpURLConnection.getResponseCode();
            if (responseCode == 200) {
                status = Status.f5654w;
            } else {
                Log.e((String) dVar.f15i, ((String) dVar.f16v).concat("Unable to revoke access!"));
            }
            String str = "Response Code: " + responseCode;
            if (dVar.f14e <= 3) {
                Log.d((String) dVar.f15i, ((String) dVar.f16v).concat(str));
            }
        } catch (IOException e9) {
            Log.e((String) dVar.f15i, ((String) dVar.f16v).concat("IOException when revoking access: ".concat(String.valueOf(e9.toString()))));
        } catch (Exception e10) {
            Log.e((String) dVar.f15i, ((String) dVar.f16v).concat("Exception when revoking access: ".concat(String.valueOf(e10.toString()))));
        }
        this.f19392e.setResult(status);
    }
}
