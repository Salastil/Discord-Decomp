package io.sentry;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.Charset;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.concurrent.Callable;

/* loaded from: classes3.dex */
public final class o4 {

    /* renamed from: d, reason: collision with root package name */
    public static final Charset f11701d = Charset.forName("UTF-8");
    public final p4 a;

    /* renamed from: b, reason: collision with root package name */
    public final Callable f11702b;

    /* renamed from: c, reason: collision with root package name */
    public byte[] f11703c;

    public o4(p4 p4Var, byte[] bArr) {
        this.a = p4Var;
        this.f11703c = bArr;
        this.f11702b = null;
    }

    public static void a(long j, long j5, String str) {
        if (j > j5) {
            throw new io.sentry.exception.b(String.format("Dropping attachment with filename '%s', because the size of the passed bytes with %d bytes is bigger than the maximum allowed attachment size of %d bytes.", str, Long.valueOf(j), Long.valueOf(j5)));
        }
    }

    public static o4 b(c1 c1Var, io.sentry.clientreport.b bVar) {
        d9.a.L(c1Var, "ISerializer is required.");
        e4.c cVar = new e4.c((Callable) new com.facebook.react.runtime.o(6, c1Var, bVar));
        return new o4(new p4(v4.resolve(bVar), new l4(cVar, 11), "application/json", null, null), new l4(cVar, 12));
    }

    public static o4 c(final d3 d3Var, final c1 c1Var, final v0 v0Var) {
        final File file = d3Var.H;
        e4.c cVar = new e4.c(new Callable() { // from class: io.sentry.n4
            @Override // java.util.concurrent.Callable
            public final Object call() {
                c1 c1Var2 = c1Var;
                File file2 = file;
                if (!file2.exists()) {
                    throw new io.sentry.exception.b(s4.h.f("Dropping profile chunk, because the file '", file2.getName(), "' doesn't exists"));
                }
                d3 d3Var2 = d3Var;
                if ("java".equals(d3Var2.f11499x)) {
                    k2 k2Var = k2.a;
                    v0 v0Var2 = v0Var;
                    if (k2Var.equals(v0Var2)) {
                        throw new io.sentry.exception.b("No ProfileConverter available, dropping chunk.");
                    }
                    try {
                        file2.getAbsolutePath();
                        ((k2) v0Var2).getClass();
                        d3Var2.J = new io.sentry.protocol.profiling.a();
                    } catch (Exception e9) {
                        throw new io.sentry.exception.b("Profile conversion failed", e9);
                    }
                } else {
                    String o6 = ki.b.o(m3.n.F0(52428800L, file2.getPath()));
                    if (o6.isEmpty()) {
                        throw new io.sentry.exception.b("Profiling trace file is empty");
                    }
                    d3Var2.I = o6;
                }
                try {
                    try {
                        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                        try {
                            BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(byteArrayOutputStream, o4.f11701d));
                            try {
                                c1Var2.a(d3Var2, bufferedWriter);
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
                    } catch (IOException e10) {
                        throw new io.sentry.exception.b("Failed to serialize profile chunk\n" + e10.getMessage());
                    }
                } finally {
                    file2.delete();
                }
            }
        });
        return new o4(new p4(v4.ProfileChunk, new l4(cVar, 0), "application-json", file.getName(), (String) null, d3Var.f11499x, (Integer) null), new l4(cVar, 1));
    }

    public static o4 d(c1 c1Var, g6 g6Var) {
        d9.a.L(c1Var, "ISerializer is required.");
        d9.a.L(g6Var, "Session is required.");
        e4.c cVar = new e4.c((Callable) new com.facebook.react.runtime.o(3, c1Var, g6Var));
        return new o4(new p4(v4.Session, new l4(cVar, 7), "application/json", null, null), new l4(cVar, 13));
    }

    public static byte[] k(LinkedHashMap linkedHashMap) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            byteArrayOutputStream.write((byte) (linkedHashMap.size() | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT));
            for (Map.Entry entry : linkedHashMap.entrySet()) {
                byte[] bytes = ((String) entry.getKey()).getBytes(f11701d);
                int length = bytes.length;
                byteArrayOutputStream.write(-39);
                byteArrayOutputStream.write((byte) length);
                byteArrayOutputStream.write(bytes);
                byte[] bArr = (byte[]) entry.getValue();
                int length2 = bArr.length;
                byteArrayOutputStream.write(-58);
                byteArrayOutputStream.write(ByteBuffer.allocate(4).order(ByteOrder.BIG_ENDIAN).putInt(length2).array());
                byteArrayOutputStream.write(bArr);
            }
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            byteArrayOutputStream.close();
            return byteArray;
        } catch (Throwable th2) {
            try {
                byteArrayOutputStream.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final io.sentry.clientreport.b e(c1 c1Var) {
        p4 p4Var = this.a;
        if (p4Var == null || p4Var.f11731w != v4.ClientReport) {
            return null;
        }
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(f()), f11701d));
        try {
            io.sentry.clientreport.b bVar = (io.sentry.clientreport.b) c1Var.c(bufferedReader, io.sentry.clientreport.b.class);
            bufferedReader.close();
            return bVar;
        } catch (Throwable th2) {
            try {
                bufferedReader.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final byte[] f() {
        Callable callable;
        if (this.f11703c == null && (callable = this.f11702b) != null) {
            this.f11703c = (byte[]) callable.call();
        }
        return this.f11703c;
    }

    public final SentryEvent g(c1 c1Var) {
        p4 p4Var = this.a;
        if (p4Var == null || p4Var.f11731w != v4.Event) {
            return null;
        }
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(f()), f11701d));
        try {
            SentryEvent sentryEvent = (SentryEvent) c1Var.c(bufferedReader, SentryEvent.class);
            bufferedReader.close();
            return sentryEvent;
        } catch (Throwable th2) {
            try {
                bufferedReader.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final y4 h(c1 c1Var) {
        p4 p4Var = this.a;
        if (p4Var == null || p4Var.f11731w != v4.Log) {
            return null;
        }
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(f()), f11701d));
        try {
            y4 y4Var = (y4) c1Var.c(bufferedReader, y4.class);
            bufferedReader.close();
            return y4Var;
        } catch (Throwable th2) {
            try {
                bufferedReader.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final c5 i(c1 c1Var) {
        p4 p4Var = this.a;
        if (p4Var == null || p4Var.f11731w != v4.TraceMetric) {
            return null;
        }
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(f()), f11701d));
        try {
            c5 c5Var = (c5) c1Var.c(bufferedReader, c5.class);
            bufferedReader.close();
            return c5Var;
        } catch (Throwable th2) {
            try {
                bufferedReader.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final io.sentry.protocol.d0 j(c1 c1Var) {
        p4 p4Var = this.a;
        if (p4Var == null || p4Var.f11731w != v4.Transaction) {
            return null;
        }
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(f()), f11701d));
        try {
            io.sentry.protocol.d0 d0Var = (io.sentry.protocol.d0) c1Var.c(bufferedReader, io.sentry.protocol.d0.class);
            bufferedReader.close();
            return d0Var;
        } catch (Throwable th2) {
            try {
                bufferedReader.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public o4(p4 p4Var, Callable callable) {
        this.a = p4Var;
        this.f11702b = callable;
        this.f11703c = null;
    }
}
