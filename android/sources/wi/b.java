package wi;

import android.util.Base64OutputStream;
import java.io.ByteArrayOutputStream;
import java.util.ArrayList;
import java.util.Collection;
import java.util.concurrent.Callable;
import java.util.zip.GZIPOutputStream;
import org.json.JSONArray;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19831d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ c f19832e;

    public /* synthetic */ b(c cVar, int i5) {
        this.f19831d = i5;
        this.f19832e = cVar;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        String byteArrayOutputStream;
        switch (this.f19831d) {
            case 0:
                c cVar = this.f19832e;
                synchronized (cVar) {
                    try {
                        g gVar = (g) cVar.a.get();
                        ArrayList c6 = gVar.c();
                        gVar.b();
                        JSONArray jSONArray = new JSONArray();
                        for (int i5 = 0; i5 < c6.size(); i5++) {
                            a aVar = (a) c6.get(i5);
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("agent", aVar.a);
                            jSONObject.put("dates", new JSONArray((Collection) aVar.f19830b));
                            jSONArray.put(jSONObject);
                        }
                        JSONObject jSONObject2 = new JSONObject();
                        jSONObject2.put("heartbeats", jSONArray);
                        jSONObject2.put("version", "2");
                        ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream();
                        Base64OutputStream base64OutputStream = new Base64OutputStream(byteArrayOutputStream2, 11);
                        try {
                            GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(base64OutputStream);
                            try {
                                gZIPOutputStream.write(jSONObject2.toString().getBytes("UTF-8"));
                                gZIPOutputStream.close();
                                base64OutputStream.close();
                                byteArrayOutputStream = byteArrayOutputStream2.toString("UTF-8");
                            } finally {
                            }
                        } finally {
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return byteArrayOutputStream;
            default:
                c cVar2 = this.f19832e;
                synchronized (cVar2) {
                    ((g) cVar2.a.get()).h(System.currentTimeMillis(), ((gj.b) cVar2.f19834c.get()).a());
                }
                return null;
        }
    }
}
