package l4;

import android.content.Context;
import android.util.Pair;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.util.concurrent.Callable;
import java.util.zip.GZIPInputStream;
import java.util.zip.ZipInputStream;

/* loaded from: classes.dex */
public final /* synthetic */ class j implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13755d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Context f13756e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f13757i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ String f13758v;

    public /* synthetic */ j(Context context, String str, String str2, int i5) {
        this.f13755d = i5;
        this.f13756e = context;
        this.f13757i = str;
        this.f13758v = str2;
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x0058, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x005e, code lost:
    
        throw r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x00d6, code lost:
    
        if (r0 != null) goto L60;
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x00f7, code lost:
    
        if ((r0.getResponseCode() / 100) == 2) goto L69;
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x0128, code lost:
    
        if (0 == 0) goto L83;
     */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00a4  */
    @Override // java.util.concurrent.Callable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object call() {
        Context context;
        String str;
        String str2;
        u4.c cVar;
        boolean z5;
        io.sentry.android.core.internal.tombstone.a aVar;
        i iVar;
        a0 a0Var;
        HttpURLConnection httpURLConnection;
        i iVar2;
        Pair pair;
        a0 f2;
        File g6;
        u4.b bVar;
        switch (this.f13755d) {
            case 0:
                context = this.f13756e;
                str = this.f13757i;
                str2 = this.f13758v;
                u4.c cVar2 = d9.a.f7445q;
                if (cVar2 == null) {
                    synchronized (u4.c.class) {
                        try {
                            cVar2 = d9.a.f7445q;
                            if (cVar2 == null) {
                                Context applicationContext = context.getApplicationContext();
                                u4.b bVar2 = d9.a.f7446r;
                                if (bVar2 == null) {
                                    synchronized (u4.b.class) {
                                        bVar = d9.a.f7446r;
                                        if (bVar == null) {
                                            bVar = new u4.b(0, new com.discord.chat.input.views.d(applicationContext, 8));
                                            d9.a.f7446r = bVar;
                                        }
                                    }
                                    bVar2 = bVar;
                                }
                                new r8.c(18);
                                cVar2 = new u4.c();
                                cVar2.f18811d = bVar2;
                                d9.a.f7445q = cVar2;
                            }
                        } finally {
                        }
                    }
                }
                cVar = cVar2;
                z5 = true;
                aVar = null;
                if (str2 != null) {
                    try {
                        g6 = ((u4.b) cVar.f18811d).g(str);
                    } catch (FileNotFoundException unused) {
                    }
                    if (g6 != null) {
                        FileInputStream fileInputStream = new FileInputStream(g6);
                        u4.a aVar2 = g6.getAbsolutePath().endsWith(".zip") ? u4.a.ZIP : g6.getAbsolutePath().endsWith(".gz") ? u4.a.GZIP : u4.a.JSON;
                        g6.getAbsolutePath();
                        x4.c.a();
                        pair = new Pair(aVar2, fileInputStream);
                        if (pair != null) {
                            u4.a aVar3 = (u4.a) pair.first;
                            InputStream inputStream = (InputStream) pair.second;
                            int ordinal = aVar3.ordinal();
                            if (ordinal == 1) {
                                f2 = m.f(context, new ZipInputStream(inputStream), str2);
                            } else if (ordinal != 2) {
                                f2 = m.c(inputStream, str2);
                            } else {
                                try {
                                    f2 = m.c(new GZIPInputStream(inputStream), str2);
                                } catch (IOException e9) {
                                    f2 = new a0(e9);
                                }
                            }
                            iVar = f2.a;
                            break;
                        }
                    }
                    pair = null;
                    if (pair != null) {
                    }
                }
                iVar = null;
                if (iVar != null) {
                    a0Var = new a0(iVar);
                } else {
                    x4.c.a();
                    x4.c.a();
                    try {
                        try {
                            aVar = r8.c.s(str);
                            httpURLConnection = (HttpURLConnection) aVar.f11200e;
                            try {
                                break;
                            } catch (IOException unused2) {
                                break;
                            }
                        } catch (Exception e10) {
                            a0Var = new a0(e10);
                            break;
                        }
                    } finally {
                    }
                }
                if (str2 != null && (iVar2 = a0Var.a) != null) {
                    q4.g.f16682b.a.b(str2, iVar2);
                }
                return a0Var;
            default:
                return m.b(this.f13756e, this.f13757i, this.f13758v);
        }
        z5 = false;
        if (z5) {
            a0Var = cVar.B(context, str, httpURLConnection.getInputStream(), httpURLConnection.getContentType(), str2);
            i iVar3 = a0Var.a;
            x4.c.a();
        } else {
            a0Var = new a0(new IllegalArgumentException(aVar.c()));
        }
        try {
            aVar.close();
        } catch (IOException e11) {
            x4.c.c("LottieFetchResult close failed ", e11);
        }
        if (str2 != null) {
            q4.g.f16682b.a.b(str2, iVar2);
        }
        return a0Var;
    }
}
