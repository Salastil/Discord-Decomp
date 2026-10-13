package com.discord.crash_reporting;

import com.discord.crash_reporting.TelemetryRingTypes;
import com.facebook.react.runtime.o;
import io.sentry.ILogger;
import io.sentry.c1;
import io.sentry.g3;
import io.sentry.o4;
import io.sentry.protocol.i0;
import java.io.BufferedWriter;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Callable;
import m3.n;
import s4.h;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4135d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ long f4136e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4137i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f4138v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f4139w;

    public /* synthetic */ d(Object obj, long j, Object obj2, Object obj3, int i5) {
        this.f4135d = i5;
        this.f4137i = obj;
        this.f4136e = j;
        this.f4138v = obj2;
        this.f4139w = obj3;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        Map snapshot$lambda$6;
        switch (this.f4135d) {
            case 0:
                snapshot$lambda$6 = TelemetryRing.snapshot$lambda$6((List) this.f4137i, this.f4136e, (TelemetryRingTypes.Budget) this.f4138v, (Long) this.f4139w);
                return snapshot$lambda$6;
            case 1:
                io.sentry.a aVar = (io.sentry.a) this.f4137i;
                c1 c1Var = (c1) this.f4138v;
                ILogger iLogger = (ILogger) this.f4139w;
                byte[] bArr = aVar.a;
                String str = aVar.f10998d;
                long j = this.f4136e;
                if (bArr == null) {
                    i0 i0Var = aVar.f10996b;
                    if (i0Var != null) {
                        bArr = io.sentry.util.c.c(c1Var, iLogger, i0Var);
                        if (bArr != null) {
                            o4.a(bArr.length, j, str);
                        }
                        throw new io.sentry.exception.b(h.f("Couldn't attach the attachment ", str, ".\nPlease check that either bytes, serializable, path or provider is set."));
                    }
                    o oVar = aVar.f10997c;
                    if (oVar != null && (bArr = (byte[]) oVar.call()) != null) {
                        o4.a(bArr.length, j, str);
                    }
                    throw new io.sentry.exception.b(h.f("Couldn't attach the attachment ", str, ".\nPlease check that either bytes, serializable, path or provider is set."));
                }
                o4.a(bArr.length, j, str);
                return bArr;
            default:
                File file = (File) this.f4137i;
                g3 g3Var = (g3) this.f4138v;
                c1 c1Var2 = (c1) this.f4139w;
                if (!file.exists()) {
                    throw new io.sentry.exception.b(h.f("Dropping profiling trace data, because the file '", file.getName(), "' doesn't exists"));
                }
                String o6 = ki.b.o(n.F0(this.f4136e, file.getPath()));
                if (o6.isEmpty()) {
                    throw new io.sentry.exception.b("Profiling trace file is empty");
                }
                g3Var.Y = o6;
                try {
                    g3Var.I = (List) g3Var.f11561e.call();
                } catch (Throwable unused) {
                }
                try {
                    try {
                        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                        try {
                            BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(byteArrayOutputStream, o4.f11701d));
                            try {
                                c1Var2.a(g3Var, bufferedWriter);
                                byte[] byteArray = byteArrayOutputStream.toByteArray();
                                bufferedWriter.close();
                                byteArrayOutputStream.close();
                                return byteArray;
                            } finally {
                            }
                        } catch (Throwable th2) {
                            try {
                                byteArrayOutputStream.close();
                            } catch (Throwable th3) {
                                th2.addSuppressed(th3);
                            }
                            throw th2;
                        }
                    } catch (IOException e9) {
                        throw new io.sentry.exception.b("Failed to serialize profiling trace data\n" + e9.getMessage());
                    }
                } finally {
                    file.delete();
                }
        }
    }
}
