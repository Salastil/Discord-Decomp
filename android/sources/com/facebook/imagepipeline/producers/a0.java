package com.facebook.imagepipeline.producers;

import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;

/* loaded from: classes3.dex */
public final class a0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ c0 f4696d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ v0 f4697e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ d0 f4698i;

    public a0(d0 d0Var, c0 c0Var, v0 v0Var) {
        this.f4698i = d0Var;
        this.f4696d = c0Var;
        this.f4697e = v0Var;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0050  */
    /* JADX WARN: Removed duplicated region for block: B:34:? A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:35:0x004b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r2v0, types: [com.facebook.imagepipeline.producers.v0] */
    /* JADX WARN: Type inference failed for: r3v0, types: [java.io.InputStream, java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r3v1, types: [java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r3v2 */
    /* JADX WARN: Type inference failed for: r3v4, types: [java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r3v5 */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        HttpURLConnection httpURLConnection;
        d0 d0Var = this.f4698i;
        c0 c0Var = this.f4696d;
        ?? r22 = this.f4697e;
        ?? r32 = 0;
        InputStream inputStream = null;
        r32 = 0;
        try {
            try {
                httpURLConnection = d0Var.a(c0Var.f4691b.g().getSourceUri(), 5);
                try {
                    c0Var.f4708g = d0Var.f4715c.now();
                    if (httpURLConnection != null) {
                        r32 = httpURLConnection.getInputStream();
                        r22.b(r32, -1);
                        inputStream = r32;
                    }
                    if (inputStream != null) {
                        try {
                            inputStream.close();
                        } catch (IOException unused) {
                        }
                    }
                    if (httpURLConnection == null) {
                        return;
                    }
                } catch (IOException e9) {
                    e = e9;
                    r22.onFailure(e);
                    if (r32 != 0) {
                        try {
                            r32.close();
                        } catch (IOException unused2) {
                        }
                    }
                    if (httpURLConnection == null) {
                        return;
                    }
                    httpURLConnection.disconnect();
                }
            } catch (Throwable th2) {
                th = th2;
                if (0 != 0) {
                    try {
                        r32.close();
                    } catch (IOException unused3) {
                    }
                }
                if (0 != 0) {
                    throw th;
                }
                r32.disconnect();
                throw th;
            }
        } catch (IOException e10) {
            e = e10;
            httpURLConnection = null;
        } catch (Throwable th3) {
            th = th3;
            if (0 != 0) {
            }
            if (0 != 0) {
            }
        }
        httpURLConnection.disconnect();
    }
}
