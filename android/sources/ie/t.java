package ie;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.google.android.exoplayer2.upstream.DataSource;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Map;

/* loaded from: classes3.dex */
public final class t implements DataSource {
    public w0 E;
    public l F;
    public p0 G;
    public DataSource H;

    /* renamed from: d, reason: collision with root package name */
    public final Context f10758d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f10759e;

    /* renamed from: i, reason: collision with root package name */
    public final DataSource f10760i;

    /* renamed from: v, reason: collision with root package name */
    public z f10761v;

    /* renamed from: w, reason: collision with root package name */
    public c f10762w;

    /* renamed from: x, reason: collision with root package name */
    public j f10763x;

    /* renamed from: y, reason: collision with root package name */
    public DataSource f10764y;

    public t(Context context, DataSource dataSource) {
        this.f10758d = context.getApplicationContext();
        dataSource.getClass();
        this.f10760i = dataSource;
        this.f10759e = new ArrayList();
    }

    public static void c(DataSource dataSource, u0 u0Var) {
        if (dataSource != null) {
            dataSource.n(u0Var);
        }
    }

    public final void b(DataSource dataSource) {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f10759e;
            if (i5 >= arrayList.size()) {
                return;
            }
            dataSource.n((u0) arrayList.get(i5));
            i5++;
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        DataSource dataSource = this.H;
        if (dataSource != null) {
            try {
                dataSource.close();
            } finally {
                this.H = null;
            }
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void n(u0 u0Var) {
        u0Var.getClass();
        this.f10760i.n(u0Var);
        this.f10759e.add(u0Var);
        c(this.f10761v, u0Var);
        c(this.f10762w, u0Var);
        c(this.f10763x, u0Var);
        c(this.f10764y, u0Var);
        c(this.E, u0Var);
        c(this.F, u0Var);
        c(this.G, u0Var);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        ke.b.k(this.H == null);
        Uri uri = pVar.a;
        String scheme = uri.getScheme();
        int i5 = ke.d0.a;
        String scheme2 = uri.getScheme();
        boolean isEmpty = TextUtils.isEmpty(scheme2);
        Context context = this.f10758d;
        if (isEmpty || "file".equals(scheme2)) {
            String path = uri.getPath();
            if (path == null || !path.startsWith("/android_asset/")) {
                if (this.f10761v == null) {
                    z zVar = new z(false);
                    this.f10761v = zVar;
                    b(zVar);
                }
                this.H = this.f10761v;
            } else {
                if (this.f10762w == null) {
                    c cVar = new c(context);
                    this.f10762w = cVar;
                    b(cVar);
                }
                this.H = this.f10762w;
            }
        } else if ("asset".equals(scheme)) {
            if (this.f10762w == null) {
                c cVar2 = new c(context);
                this.f10762w = cVar2;
                b(cVar2);
            }
            this.H = this.f10762w;
        } else if ("content".equals(scheme)) {
            if (this.f10763x == null) {
                j jVar = new j(context);
                this.f10763x = jVar;
                b(jVar);
            }
            this.H = this.f10763x;
        } else {
            boolean equals = "rtmp".equals(scheme);
            DataSource dataSource = this.f10760i;
            if (equals) {
                if (this.f10764y == null) {
                    try {
                        DataSource dataSource2 = (DataSource) Class.forName("com.google.android.exoplayer2.ext.rtmp.RtmpDataSource").getConstructor(null).newInstance(null);
                        this.f10764y = dataSource2;
                        b(dataSource2);
                    } catch (ClassNotFoundException unused) {
                        ke.b.N("DefaultDataSource", "Attempting to play RTMP stream without depending on the RTMP extension");
                    } catch (Exception e9) {
                        throw new RuntimeException("Error instantiating RTMP extension", e9);
                    }
                    if (this.f10764y == null) {
                        this.f10764y = dataSource;
                    }
                }
                this.H = this.f10764y;
            } else if ("udp".equals(scheme)) {
                if (this.E == null) {
                    w0 w0Var = new w0();
                    this.E = w0Var;
                    b(w0Var);
                }
                this.H = this.E;
            } else if ("data".equals(scheme)) {
                if (this.F == null) {
                    l lVar = new l(false);
                    this.F = lVar;
                    b(lVar);
                }
                this.H = this.F;
            } else if ("rawresource".equals(scheme) || "android.resource".equals(scheme)) {
                if (this.G == null) {
                    p0 p0Var = new p0(context);
                    this.G = p0Var;
                    b(p0Var);
                }
                this.H = this.G;
            } else {
                this.H = dataSource;
            }
        }
        return this.H.o(pVar);
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        DataSource dataSource = this.H;
        dataSource.getClass();
        return dataSource.read(bArr, i5, i6);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Map s() {
        DataSource dataSource = this.H;
        return dataSource == null ? Collections.EMPTY_MAP : dataSource.s();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        DataSource dataSource = this.H;
        if (dataSource == null) {
            return null;
        }
        return dataSource.x();
    }
}
