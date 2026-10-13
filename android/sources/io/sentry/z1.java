package io.sentry;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import io.sentry.protocol.DebugImage;
import io.sentry.protocol.SentryStackFrame;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.Reader;
import java.io.StringWriter;
import java.io.Writer;
import java.nio.charset.Charset;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class z1 implements c1 {

    /* renamed from: c, reason: collision with root package name */
    public static final Charset f12093c = Charset.forName("UTF-8");
    public final v5 a;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f12094b;

    public z1(v5 v5Var) {
        this.a = v5Var;
        HashMap hashMap = new HashMap();
        this.f12094b = hashMap;
        hashMap.put(io.sentry.protocol.a.class, new io.sentry.clientreport.a(4));
        hashMap.put(Breadcrumb.class, new d(0));
        hashMap.put(io.sentry.protocol.b.class, new io.sentry.clientreport.a(5));
        hashMap.put(io.sentry.protocol.c.class, new io.sentry.clientreport.a(6));
        hashMap.put(DebugImage.class, new io.sentry.clientreport.a(7));
        hashMap.put(io.sentry.protocol.d.class, new io.sentry.clientreport.a(8));
        hashMap.put(io.sentry.protocol.f.class, new io.sentry.clientreport.a(9));
        hashMap.put(io.sentry.protocol.e.class, new io.sentry.clientreport.a(10));
        hashMap.put(io.sentry.protocol.i.class, new io.sentry.clientreport.a(12));
        hashMap.put(io.sentry.protocol.k.class, new io.sentry.clientreport.a(14));
        hashMap.put(io.sentry.protocol.z.class, new io.sentry.clientreport.a(29));
        hashMap.put(io.sentry.protocol.l.class, new io.sentry.clientreport.a(15));
        hashMap.put(io.sentry.protocol.m.class, new io.sentry.clientreport.a(16));
        hashMap.put(io.sentry.protocol.n.class, new io.sentry.clientreport.a(17));
        hashMap.put(io.sentry.protocol.o.class, new io.sentry.clientreport.a(18));
        hashMap.put(d3.class, new d(1));
        hashMap.put(e3.class, new d(2));
        hashMap.put(g3.class, new d(3));
        hashMap.put(h3.class, new d(4));
        hashMap.put(io.sentry.profilemeasurements.a.class, new io.sentry.clientreport.a(2));
        hashMap.put(io.sentry.profilemeasurements.b.class, new io.sentry.clientreport.a(3));
        hashMap.put(io.sentry.protocol.p.class, new io.sentry.clientreport.a(19));
        hashMap.put(l3.class, new d(5));
        hashMap.put(io.sentry.rrweb.a.class, new io.sentry.protocol.b0(9));
        hashMap.put(io.sentry.rrweb.c.class, new io.sentry.protocol.b0(10));
        hashMap.put(io.sentry.rrweb.g.class, new io.sentry.protocol.b0(12));
        hashMap.put(io.sentry.rrweb.i.class, new io.sentry.protocol.b0(14));
        hashMap.put(io.sentry.rrweb.j.class, new io.sentry.protocol.b0(16));
        hashMap.put(io.sentry.rrweb.l.class, new io.sentry.protocol.b0(17));
        hashMap.put(io.sentry.rrweb.m.class, new io.sentry.protocol.b0(18));
        hashMap.put(io.sentry.protocol.s.class, new io.sentry.clientreport.a(20));
        hashMap.put(io.sentry.protocol.t.class, new io.sentry.clientreport.a(21));
        hashMap.put(k4.class, new d(7));
        hashMap.put(p4.class, new d(8));
        hashMap.put(SentryEvent.class, new d(9));
        hashMap.put(io.sentry.protocol.u.class, new io.sentry.clientreport.a(22));
        hashMap.put(v4.class, new d(10));
        hashMap.put(SentryLevel.class, new d(11));
        hashMap.put(w4.class, new d(12));
        hashMap.put(y4.class, new d(15));
        hashMap.put(c5.class, new d(18));
        hashMap.put(io.sentry.protocol.w.class, new io.sentry.clientreport.a(24));
        hashMap.put(io.sentry.protocol.x.class, new io.sentry.clientreport.a(25));
        hashMap.put(x5.class, new d(19));
        hashMap.put(io.sentry.protocol.y.class, new io.sentry.clientreport.a(26));
        hashMap.put(SentryStackFrame.class, new io.sentry.clientreport.a(27));
        hashMap.put(io.sentry.protocol.a0.class, new io.sentry.clientreport.a(28));
        hashMap.put(d4.class, new d(6));
        hashMap.put(io.sentry.protocol.c0.class, new io.sentry.protocol.b0(0));
        hashMap.put(io.sentry.protocol.d0.class, new io.sentry.protocol.b0(1));
        hashMap.put(g6.class, new d(21));
        hashMap.put(i6.class, new d(22));
        hashMap.put(k6.class, new d(23));
        hashMap.put(l6.class, new d(24));
        hashMap.put(io.sentry.protocol.h0.class, new io.sentry.protocol.b0(2));
        hashMap.put(io.sentry.protocol.j.class, new io.sentry.clientreport.a(13));
        hashMap.put(s6.class, new d(26));
        hashMap.put(io.sentry.clientreport.b.class, new io.sentry.clientreport.a(0));
        hashMap.put(io.sentry.protocol.j0.class, new io.sentry.protocol.b0(4));
        hashMap.put(io.sentry.protocol.i0.class, new io.sentry.protocol.b0(3));
    }

    @Override // io.sentry.c1
    public final void a(Object obj, Writer writer) {
        d9.a.L(obj, "The entity is required.");
        v5 v5Var = this.a;
        ILogger logger = v5Var.getLogger();
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        if (logger.w(sentryLevel)) {
            v5Var.getLogger().u(sentryLevel, "Serializing object: %s", f(obj, v5Var.isEnablePrettySerializationOutput()));
        }
        e4.c cVar = new e4.c(writer, v5Var.getMaxDepth());
        ((ha.l) cVar.f7940i).a0(cVar, v5Var.getLogger(), obj);
        writer.flush();
    }

    @Override // io.sentry.c1
    public final String b(ConcurrentHashMap concurrentHashMap) {
        return f(concurrentHashMap, false);
    }

    @Override // io.sentry.c1
    public final Object c(Reader reader, Class cls) {
        Object b02;
        v5 v5Var = this.a;
        try {
            x1 x1Var = new x1(reader);
            try {
                n1 n1Var = (n1) this.f12094b.get(cls);
                if (n1Var != null) {
                    b02 = cls.cast(n1Var.a(x1Var, v5Var.getLogger()));
                } else {
                    if (!cls.isArray() && !Collection.class.isAssignableFrom(cls) && !String.class.isAssignableFrom(cls) && !Map.class.isAssignableFrom(cls)) {
                        x1Var.close();
                        return null;
                    }
                    b02 = x1Var.b0();
                }
                x1Var.close();
                return b02;
            } finally {
            }
        } catch (Exception e9) {
            v5Var.getLogger().k(SentryLevel.ERROR, "Error when deserializing", e9);
            return null;
        }
    }

    @Override // io.sentry.c1
    public final io.sentry.internal.debugmeta.c d(BufferedInputStream bufferedInputStream) {
        v5 v5Var = this.a;
        try {
            return v5Var.getEnvelopeReader().a(bufferedInputStream);
        } catch (IOException e9) {
            v5Var.getLogger().k(SentryLevel.ERROR, "Error deserializing envelope.", e9);
            return null;
        }
    }

    @Override // io.sentry.c1
    public final void e(io.sentry.internal.debugmeta.c cVar, OutputStream outputStream) {
        v5 v5Var = this.a;
        d9.a.L(cVar, "The SentryEnvelope object is required.");
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(new BufferedOutputStream(outputStream), f12093c));
        try {
            ((k4) cVar.f11622e).serialize(new e4.c(bufferedWriter, v5Var.getMaxDepth()), v5Var.getLogger());
            bufferedWriter.write(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
            for (o4 o4Var : (Iterable) cVar.f11623i) {
                try {
                    byte[] f2 = o4Var.f();
                    o4Var.a.serialize(new e4.c(bufferedWriter, v5Var.getMaxDepth()), v5Var.getLogger());
                    bufferedWriter.write(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                    bufferedWriter.flush();
                    outputStream.write(f2);
                    bufferedWriter.write(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                } catch (Exception e9) {
                    v5Var.getLogger().k(SentryLevel.ERROR, "Failed to create envelope item. Dropping it.", e9);
                }
            }
        } finally {
            bufferedWriter.flush();
        }
    }

    public final String f(Object obj, boolean z5) {
        StringWriter stringWriter = new StringWriter();
        v5 v5Var = this.a;
        e4.c cVar = new e4.c(stringWriter, v5Var.getMaxDepth());
        if (z5) {
            cVar.R("\t");
        }
        ((ha.l) cVar.f7940i).a0(cVar, v5Var.getLogger(), obj);
        return stringWriter.toString();
    }
}
