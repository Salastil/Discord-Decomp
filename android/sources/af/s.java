package af;

import a5.k0;
import androidx.core.graphics.Insets;
import androidx.core.view.n1;
import androidx.dynamicanimation.animation.SpringAnimation;
import com.discord.crash_reporting.CrashReporting;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.IScope;
import io.sentry.ISpan;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.SpotlightIntegration;
import io.sentry.android.core.q0;
import io.sentry.c1;
import io.sentry.c5;
import io.sentry.d3;
import io.sentry.f1;
import io.sentry.f4;
import io.sentry.f6;
import io.sentry.g2;
import io.sentry.g3;
import io.sentry.g4;
import io.sentry.g6;
import io.sentry.h1;
import io.sentry.h5;
import io.sentry.i5;
import io.sentry.i6;
import io.sentry.k4;
import io.sentry.l3;
import io.sentry.l4;
import io.sentry.l6;
import io.sentry.n6;
import io.sentry.o4;
import io.sentry.p4;
import io.sentry.p6;
import io.sentry.q5;
import io.sentry.u4;
import io.sentry.v4;
import io.sentry.v5;
import io.sentry.w2;
import io.sentry.x5;
import io.sentry.y4;
import io.sentry.z0;
import java.io.BufferedWriter;
import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.net.URI;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.Callable;
import java.util.concurrent.RejectedExecutionException;
import java.util.regex.Pattern;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class s implements bf.b, z0 {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public Object f594b;

    /* renamed from: c, reason: collision with root package name */
    public Object f595c;

    /* renamed from: d, reason: collision with root package name */
    public Object f596d;

    /* renamed from: e, reason: collision with root package name */
    public Object f597e;

    /* renamed from: f, reason: collision with root package name */
    public Object f598f;

    public s() {
        this.f597e = fo.l.a(new h8.a(10, this));
    }

    public static ArrayList r(Hint hint) {
        ArrayList arrayList = new ArrayList(hint.f10980b);
        io.sentry.a aVar = hint.f10982d;
        if (aVar != null) {
            arrayList.add(aVar);
        }
        io.sentry.a aVar2 = hint.f10983e;
        if (aVar2 != null) {
            arrayList.add(aVar2);
        }
        io.sentry.a aVar3 = hint.f10984f;
        if (aVar3 != null) {
            arrayList.add(aVar3);
        }
        return arrayList;
    }

    public void A(ye.b bVar) {
        q qVar = (q) ((e) this.f598f).G.get((a) this.f595c);
        if (qVar != null) {
            qVar.o(bVar);
        }
    }

    @Override // io.sentry.z0
    public void a(boolean z5) {
        long shutdownTimeoutMillis;
        v5 v5Var = (v5) this.f594b;
        v5Var.getLogger().u(SentryLevel.INFO, "Closing SentryClient.", new Object[0]);
        if (z5) {
            shutdownTimeoutMillis = 0;
        } else {
            try {
                shutdownTimeoutMillis = v5Var.getShutdownTimeoutMillis();
            } catch (IOException e9) {
                v5Var.getLogger().k(SentryLevel.WARNING, "Failed to close the connection to the Sentry Server.", e9);
            }
        }
        b(shutdownTimeoutMillis);
        ((io.sentry.logger.a) this.f597e).a(z5);
        ((io.sentry.metrics.a) this.f598f).a(z5);
        ((io.sentry.transport.g) this.f595c).a(z5);
        for (io.sentry.b0 b0Var : v5Var.getEventProcessors()) {
            if (b0Var instanceof Closeable) {
                try {
                    ((Closeable) b0Var).close();
                } catch (IOException e10) {
                    v5Var.getLogger().u(SentryLevel.WARNING, "Failed to close the event processor {}.", b0Var, e10);
                }
            }
        }
        this.a = false;
    }

    @Override // io.sentry.z0
    public void b(long j) {
        ((io.sentry.logger.a) this.f597e).b(j);
        ((io.sentry.metrics.a) this.f598f).b(j);
        ((io.sentry.transport.g) this.f595c).b(j);
    }

    @Override // io.sentry.z0
    public void c(g6 g6Var, Hint hint) {
        v5 v5Var = (v5) this.f594b;
        d9.a.L(g6Var, "Session is required.");
        String str = g6Var.J;
        if (str == null || str.isEmpty()) {
            v5Var.getLogger().u(SentryLevel.WARNING, "Sessions can't be captured without setting a release.", new Object[0]);
            return;
        }
        try {
            c1 serializer = v5Var.getSerializer();
            io.sentry.protocol.t sdkVersion = v5Var.getSdkVersion();
            d9.a.L(serializer, "Serializer is required.");
            h(new io.sentry.internal.debugmeta.c((io.sentry.protocol.v) null, sdkVersion, o4.d(serializer, g6Var)), hint);
        } catch (IOException e9) {
            v5Var.getLogger().k(SentryLevel.ERROR, "Failed to capture session.", e9);
        }
    }

    @Override // io.sentry.z0
    public io.sentry.transport.p d() {
        return ((io.sentry.transport.g) this.f595c).d();
    }

    @Override // io.sentry.z0
    public boolean e() {
        return ((io.sentry.transport.g) this.f595c).e();
    }

    @Override // bf.b
    public void f(ye.b bVar) {
        ((e) this.f598f).K.post(new ii.o(this, bVar, 3, false));
    }

    @Override // io.sentry.z0
    public io.sentry.protocol.v g(x5 x5Var, IScope iScope, Hint hint) {
        v5 v5Var = (v5) this.f594b;
        d9.a.L(x5Var, "SessionReplay is required.");
        if (z(x5Var, hint)) {
            io.sentry.protocol.p pVar = x5Var.f11546v;
            io.sentry.protocol.c cVar = x5Var.f11544e;
            if (pVar == null) {
                x5Var.f11546v = iScope.R();
            }
            if (x5Var.F == null) {
                x5Var.F = iScope.Q();
            }
            if (x5Var.f11547w == null) {
                x5Var.f11547w = new HashMap(new HashMap(iScope.D()));
            } else {
                for (Map.Entry entry : iScope.D().entrySet()) {
                    if (!x5Var.f11547w.containsKey(entry.getKey())) {
                        x5Var.f11547w.put((String) entry.getKey(), (String) entry.getValue());
                    }
                }
            }
            for (Map.Entry entry2 : new io.sentry.protocol.c(iScope.J()).f11763d.entrySet()) {
                if (!cVar.a(entry2.getKey())) {
                    cVar.k(entry2.getValue(), (String) entry2.getKey());
                }
            }
            ISpan t5 = iScope.t();
            if (cVar.i() == null) {
                if (t5 == null) {
                    cVar.w(p6.b(iScope.z()));
                } else {
                    cVar.w(t5.o());
                }
            }
        }
        v5Var.getLogger().u(SentryLevel.DEBUG, "Capturing session replay: %s", x5Var.f11543d);
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        io.sentry.protocol.v vVar2 = x5Var.f11543d;
        if (vVar2 != null) {
            vVar = vVar2;
        }
        Iterator<io.sentry.b0> it = v5Var.getEventProcessors().iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            io.sentry.b0 next = it.next();
            try {
                x5Var = next.c(x5Var, hint);
            } catch (Throwable th2) {
                v5Var.getLogger().i(SentryLevel.ERROR, th2, "An exception occurred while processing replay event by processor: %s", next.getClass().getName());
            }
            if (x5Var == null) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Replay event was dropped by a processor: %s", next.getClass().getName());
                v5Var.getClientReportRecorder().f(io.sentry.clientreport.d.EVENT_PROCESSOR, io.sentry.l.Replay);
                break;
            }
        }
        if (x5Var != null) {
            v5Var.getBeforeSendReplay();
        }
        if (x5Var == null) {
            return io.sentry.protocol.v.f11895e;
        }
        try {
            io.sentry.internal.debugmeta.c q5 = q(x5Var, hint.f10985g, t(iScope, hint, x5Var, null), io.sentry.hints.b.class.isInstance(hint.b("sentry:typeCheckHint")));
            hint.a();
            ((io.sentry.transport.g) this.f595c).O(q5, hint);
            return vVar;
        } catch (IOException e9) {
            v5Var.getLogger().i(SentryLevel.WARNING, e9, "Capturing event %s failed.", vVar);
            return io.sentry.protocol.v.f11895e;
        }
    }

    @Override // io.sentry.z0
    public io.sentry.protocol.v h(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        try {
            hint.a();
            return y(cVar, hint);
        } catch (IOException e9) {
            ((v5) this.f594b).getLogger().k(SentryLevel.ERROR, "Failed to capture envelope.", e9);
            return io.sentry.protocol.v.f11895e;
        }
    }

    @Override // io.sentry.z0
    public io.sentry.protocol.v i(d3 d3Var) {
        d9.a.L(d3Var, "profileChunk is required.");
        v5 v5Var = (v5) this.f594b;
        v5Var.getLogger().u(SentryLevel.DEBUG, "Capturing profile chunk: %s", d3Var.f11496i);
        io.sentry.protocol.v vVar = d3Var.f11496i;
        io.sentry.protocol.d a = io.sentry.protocol.d.a(d3Var.f11494d, v5Var);
        if (a != null) {
            d3Var.f11494d = a;
        }
        try {
            return y(new io.sentry.internal.debugmeta.c(new k4(vVar, v5Var.getSdkVersion(), null), Collections.singletonList(o4.c(d3Var, v5Var.getSerializer(), v5Var.getProfilerConverter()))), null);
        } catch (io.sentry.exception.b | IOException e9) {
            v5Var.getLogger().i(SentryLevel.WARNING, e9, "Capturing profile chunk %s failed.", vVar);
            return io.sentry.protocol.v.f11895e;
        }
    }

    @Override // io.sentry.z0
    public boolean isEnabled() {
        return this.a;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(3:(3:62|63|65)|59|60) */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x0079, code lost:
    
        r1.getLogger().u(io.sentry.SentryLevel.DEBUG, "Transaction was dropped as transaction name %s is ignored", r11.M);
        r12 = r1.getClientReportRecorder();
        r13 = io.sentry.clientreport.d.EVENT_PROCESSOR;
        r12.f(r13, io.sentry.l.Transaction);
        r1.getClientReportRecorder().n(r13, io.sentry.l.Span, r11.P.size() + 1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x00a9, code lost:
    
        return io.sentry.protocol.v.f11895e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x0156, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x0159, code lost:
    
        r0 = e;
     */
    @Override // io.sentry.z0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public io.sentry.protocol.v j(io.sentry.protocol.d0 d0Var, n6 n6Var, IScope iScope, Hint hint, g3 g3Var) {
        Throwable th2;
        Pattern pattern;
        v5 v5Var = (v5) this.f594b;
        if (hint == null) {
            hint = new Hint();
        }
        if (z(d0Var, hint)) {
            hint.f10980b.addAll(iScope.H());
        }
        v5Var.getLogger().u(SentryLevel.DEBUG, "Capturing transaction: %s", d0Var.f11543d);
        List<io.sentry.e0> ignoredTransactions = v5Var.getIgnoredTransactions();
        String str = d0Var.M;
        if (str != null && ignoredTransactions != null && !ignoredTransactions.isEmpty()) {
            Iterator<io.sentry.e0> it = ignoredTransactions.iterator();
            while (true) {
                if (!it.hasNext()) {
                    Iterator<io.sentry.e0> it2 = ignoredTransactions.iterator();
                    while (it2.hasNext()) {
                        try {
                            pattern = it2.next().f11529b;
                        } catch (Throwable unused) {
                        }
                        if (pattern == null ? false : pattern.matcher(str).matches()) {
                        }
                    }
                } else if (it.next().a.equalsIgnoreCase(str)) {
                    break;
                }
            }
        }
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        io.sentry.protocol.v vVar2 = d0Var.f11543d;
        if (vVar2 == null) {
            vVar2 = vVar;
        }
        if (z(d0Var, hint)) {
            m(d0Var, iScope);
            d0Var = w(d0Var, hint, iScope.S());
            if (d0Var == null) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Transaction was dropped by applyScope", new Object[0]);
            }
        }
        if (d0Var != null) {
            d0Var = w(d0Var, hint, v5Var.getEventProcessors());
        }
        io.sentry.protocol.d0 d0Var2 = d0Var;
        if (d0Var2 == null) {
            v5Var.getLogger().u(SentryLevel.DEBUG, "Transaction was dropped by Event processors.", new Object[0]);
            return vVar;
        }
        ArrayList arrayList = d0Var2.P;
        int size = arrayList.size();
        v5Var.getBeforeSendTransaction();
        int size2 = arrayList.size();
        if (size2 < size) {
            int i5 = size - size2;
            v5Var.getLogger().u(SentryLevel.DEBUG, "%d spans were dropped by beforeSendTransaction.", Integer.valueOf(i5));
            v5Var.getClientReportRecorder().n(io.sentry.clientreport.d.BEFORE_SEND, io.sentry.l.Span, i5);
        }
        try {
            ArrayList r5 = r(hint);
            ArrayList arrayList2 = new ArrayList();
            Iterator it3 = r5.iterator();
            while (it3.hasNext()) {
                try {
                    ((io.sentry.a) it3.next()).getClass();
                } catch (io.sentry.exception.b e9) {
                    e = e9;
                    th2 = e;
                    v5Var.getLogger().i(SentryLevel.WARNING, th2, "Capturing transaction %s failed.", vVar2);
                    return io.sentry.protocol.v.f11895e;
                } catch (IOException e10) {
                    e = e10;
                    th2 = e;
                    v5Var.getLogger().i(SentryLevel.WARNING, th2, "Capturing transaction %s failed.", vVar2);
                    return io.sentry.protocol.v.f11895e;
                }
            }
            try {
                io.sentry.internal.debugmeta.c n6 = n(d0Var2, arrayList2, null, n6Var, g3Var);
                hint.a();
                return n6 != null ? y(n6, hint) : vVar2;
            } catch (io.sentry.exception.b e11) {
                e = e11;
                th2 = e;
                v5Var.getLogger().i(SentryLevel.WARNING, th2, "Capturing transaction %s failed.", vVar2);
                return io.sentry.protocol.v.f11895e;
            } catch (IOException e12) {
                e = e12;
                th2 = e;
                v5Var.getLogger().i(SentryLevel.WARNING, th2, "Capturing transaction %s failed.", vVar2);
                return io.sentry.protocol.v.f11895e;
            }
        } catch (io.sentry.exception.b | IOException e13) {
            e = e13;
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(30:(1:103)(1:202)|104|(3:106|(1:108)(1:194)|(23:110|111|(1:113)(1:193)|114|(1:192)(1:119)|(3:(4:184|(1:186)|188|(1:190))|183|(14:126|(1:130)|131|(1:181)(1:135)|(5:139|(2:141|(1:143)(1:145))|146|(1:148)|149)|(2:179|180)(1:151)|152|(2:154|155)(1:178)|156|157|158|(1:160)|(2:167|(1:169)(1:170))|171)(2:124|125))|121|(0)|126|(2:128|130)|131|(1:133)|181|(5:139|(0)|146|(0)|149)|(0)(0)|152|(0)(0)|156|157|158|(0)|(4:163|165|167|(0)(0))|171))|195|(1:(25:198|199|111|(0)(0)|114|(0)|192|(0)|121|(0)|126|(0)|131|(0)|181|(0)|(0)(0)|152|(0)(0)|156|157|158|(0)|(0)|171)(1:200))|201|199|111|(0)(0)|114|(0)|192|(0)|121|(0)|126|(0)|131|(0)|181|(0)|(0)(0)|152|(0)(0)|156|157|158|(0)|(0)|171) */
    /* JADX WARN: Code restructure failed: missing block: B:144:0x035a, code lost:
    
        if ((r7.e() != null) != false) goto L193;
     */
    /* JADX WARN: Code restructure failed: missing block: B:172:0x0397, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:174:0x0399, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:187:0x02ed, code lost:
    
        if (r0.f11573y != r5) goto L157;
     */
    /* JADX WARN: Code restructure failed: missing block: B:191:0x02fe, code lost:
    
        if (r0.f11569i.get() <= 0) goto L157;
     */
    /* JADX WARN: Code restructure failed: missing block: B:228:0x01f4, code lost:
    
        if (zo.c0.B(r0, r1) != false) goto L101;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x00dd, code lost:
    
        r1.getLogger().u(io.sentry.SentryLevel.DEBUG, "Event was dropped as it matched a string/pattern in ignoredErrors", r13.N);
        r1.getClientReportRecorder().f(io.sentry.clientreport.d.EVENT_PROCESSOR, io.sentry.l.Error);
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x00fb, code lost:
    
        return io.sentry.protocol.v.f11895e;
     */
    /* JADX WARN: Removed duplicated region for block: B:113:0x029f  */
    /* JADX WARN: Removed duplicated region for block: B:116:0x02ab A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:123:0x0303 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:128:0x0319  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x0336  */
    /* JADX WARN: Removed duplicated region for block: B:137:0x0347 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:141:0x0351  */
    /* JADX WARN: Removed duplicated region for block: B:148:0x0367  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x0374  */
    /* JADX WARN: Removed duplicated region for block: B:154:0x037b A[Catch: b | IOException -> 0x0381, IOException -> 0x0384, TRY_LEAVE, TryCatch #6 {b | IOException -> 0x0381, blocks: (B:180:0x0371, B:152:0x0375, B:154:0x037b), top: B:179:0x0371 }] */
    /* JADX WARN: Removed duplicated region for block: B:160:0x0392 A[Catch: b -> 0x0397, IOException -> 0x0399, TRY_LEAVE, TryCatch #7 {b -> 0x0397, IOException -> 0x0399, blocks: (B:158:0x0389, B:160:0x0392), top: B:157:0x0389 }] */
    /* JADX WARN: Removed duplicated region for block: B:163:0x03ad  */
    /* JADX WARN: Removed duplicated region for block: B:169:0x03c7  */
    /* JADX WARN: Removed duplicated region for block: B:170:0x03d6  */
    /* JADX WARN: Removed duplicated region for block: B:178:0x0386  */
    /* JADX WARN: Removed duplicated region for block: B:179:0x0371 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:182:0x02e1  */
    /* JADX WARN: Removed duplicated region for block: B:193:0x02a1  */
    @Override // io.sentry.z0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public io.sentry.protocol.v k(SentryEvent sentryEvent, IScope iScope, Hint hint) {
        SentryEvent init$lambda$3$lambda$1;
        g6 g6Var;
        g6 g6Var2;
        SentryEvent sentryEvent2;
        boolean z5;
        io.sentry.protocol.v vVar;
        String str;
        f1 n6;
        Object b10;
        io.sentry.internal.debugmeta.c n10;
        io.sentry.protocol.v vVar2;
        io.sentry.protocol.h h6;
        v5 v5Var = (v5) this.f594b;
        if (hint == null) {
            hint = new Hint();
        }
        if (z(sentryEvent, hint) && iScope != null) {
            hint.f10980b.addAll(iScope.H());
        }
        ILogger logger = v5Var.getLogger();
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        logger.u(sentryLevel, "Capturing event: %s", sentryEvent.f11543d);
        Throwable a = sentryEvent.a();
        if (a != null && v5Var.getIgnoredExceptionsForType().contains(a.getClass())) {
            v5Var.getLogger().u(sentryLevel, "Event was dropped as the exception %s is ignored", a.getClass());
            v5Var.getClientReportRecorder().f(io.sentry.clientreport.d.EVENT_PROCESSOR, io.sentry.l.Error);
            return io.sentry.protocol.v.f11895e;
        }
        List<io.sentry.e0> ignoredErrors = v5Var.getIgnoredErrors();
        if (ignoredErrors != null && !ignoredErrors.isEmpty()) {
            HashSet hashSet = new HashSet();
            io.sentry.protocol.n nVar = sentryEvent.N;
            if (nVar != null) {
                String str2 = nVar.f11843e;
                if (str2 != null) {
                    hashSet.add(str2);
                }
                String str3 = nVar.f11842d;
                if (str3 != null) {
                    hashSet.add(str3);
                }
            }
            Throwable a10 = sentryEvent.a();
            if (a10 != null) {
                hashSet.add(a10.toString());
            }
            Iterator<io.sentry.e0> it = ignoredErrors.iterator();
            while (true) {
                if (it.hasNext()) {
                    if (hashSet.contains(it.next().a)) {
                        break;
                    }
                } else {
                    for (io.sentry.e0 e0Var : ignoredErrors) {
                        Iterator it2 = hashSet.iterator();
                        while (it2.hasNext()) {
                            String str4 = (String) it2.next();
                            Pattern pattern = e0Var.f11529b;
                            if (pattern == null ? false : pattern.matcher(str4).matches()) {
                            }
                        }
                    }
                }
            }
        }
        if (z(sentryEvent, hint)) {
            if (iScope != null) {
                m(sentryEvent, iScope);
                String str5 = sentryEvent.S;
                io.sentry.protocol.c cVar = sentryEvent.f11544e;
                if (str5 == null) {
                    sentryEvent.S = iScope.T();
                }
                if (sentryEvent.T == null) {
                    List P = iScope.P();
                    sentryEvent.T = P != null ? new ArrayList(P) : null;
                }
                if (iScope.x() != null) {
                    sentryEvent.R = iScope.x();
                }
                ISpan t5 = iScope.t();
                if (cVar.i() == null) {
                    if (t5 == null) {
                        cVar.w(p6.b(iScope.z()));
                    } else {
                        cVar.w(t5.o());
                    }
                }
                if (cVar.f() == null && (h6 = iScope.h()) != null) {
                    cVar.q(h6);
                }
                sentryEvent = v(sentryEvent, hint, iScope.S());
            }
            if (sentryEvent == null) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Event was dropped by applyScope", new Object[0]);
                return io.sentry.protocol.v.f11895e;
            }
        }
        SentryEvent v5 = v(sentryEvent, hint, v5Var.getEventProcessors());
        if (v5 != null) {
            i5 beforeSend = v5Var.getBeforeSend();
            if (beforeSend != null) {
                try {
                    v5 = beforeSend.a(v5, hint);
                } catch (Throwable th2) {
                    v5Var.getLogger().k(SentryLevel.ERROR, "The BeforeSend callback threw an exception. It will be added as breadcrumb and continue.", th2);
                    v5 = null;
                }
            }
            if (v5 == null) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Event was dropped by beforeSend", new Object[0]);
                v5Var.getClientReportRecorder().f(io.sentry.clientreport.d.BEFORE_SEND, io.sentry.l.Error);
            }
        }
        if (v5 != null) {
            try {
                if (v5Var.isEnableEventSizeLimiting() && !zo.c0.B(v5, v5Var)) {
                    v5Var.getLogger().u(SentryLevel.INFO, "Event %s exceeds %d bytes limit. Reducing size by dropping fields.", v5.f11543d, Long.valueOf(v5.MAX_EVENT_SIZE_BYTES));
                    q5 onOversizedEvent = v5Var.getOnOversizedEvent();
                    if (onOversizedEvent != null) {
                        try {
                            init$lambda$3$lambda$1 = CrashReporting.init$lambda$3$lambda$1(((com.discord.crash_reporting.b) onOversizedEvent).f4134d, v5, hint);
                        } catch (Throwable th3) {
                            v5Var.getLogger().k(SentryLevel.ERROR, "The onOversizedEvent callback threw an exception. It will be ignored and automatic reduction will continue.", th3);
                        }
                    }
                    init$lambda$3$lambda$1 = v5;
                    List list = init$lambda$3$lambda$1.J;
                    if (list != null && !list.isEmpty()) {
                        init$lambda$3$lambda$1.J = null;
                        v5Var.getLogger().u(SentryLevel.DEBUG, "Removed breadcrumbs to reduce size of event %s", init$lambda$3$lambda$1.f11543d);
                    }
                    if (!zo.c0.B(init$lambda$3$lambda$1, v5Var)) {
                        zo.c0.O(init$lambda$3$lambda$1, v5Var);
                        if (!zo.c0.B(init$lambda$3$lambda$1, v5Var)) {
                            v5Var.getLogger().u(SentryLevel.WARNING, "Event %s still exceeds size limit after reducing all fields. Event may be rejected by server.", v5.f11543d);
                        }
                    }
                    v5 = init$lambda$3$lambda$1;
                }
            } catch (Throwable th4) {
                v5Var.getLogger().k(SentryLevel.ERROR, "An error occurred while limiting event size. Event will be sent as-is.", th4);
            }
        }
        if (v5 == null) {
            return io.sentry.protocol.v.f11895e;
        }
        g6 A = iScope != null ? iScope.A(new i7.a(11)) : null;
        if (A != null) {
            if (A.f11573y != f6.Ok) {
                g6Var2 = null;
                io.sentry.util.i a11 = v5Var.getSampleRate() == null ? null : io.sentry.util.j.a();
                if (v5Var.getSampleRate() != null || a11 == null || v5Var.getSampleRate().doubleValue() >= a11.c()) {
                    sentryEvent2 = v5;
                } else {
                    v5Var.getLogger().u(SentryLevel.DEBUG, "Event %s was dropped due to sampling decision.", v5.f11543d);
                    v5Var.getClientReportRecorder().f(io.sentry.clientreport.d.SAMPLE_RATE, io.sentry.l.Error);
                    sentryEvent2 = null;
                }
                if (g6Var2 != null) {
                    if (A != null) {
                        f6 f6Var = g6Var2.f11573y;
                        f6 f6Var2 = f6.Crashed;
                        if (f6Var == f6Var2) {
                        }
                        if (g6Var2.f11569i.get() > 0) {
                        }
                    }
                    z5 = true;
                    if (sentryEvent2 != null && !z5) {
                        v5Var.getLogger().u(SentryLevel.DEBUG, "Not sending session update for dropped event as it did not cause the session health to change.", new Object[0]);
                        return io.sentry.protocol.v.f11895e;
                    }
                    vVar = io.sentry.protocol.v.f11895e;
                    if (sentryEvent2 != null && (vVar2 = sentryEvent2.f11543d) != null) {
                        vVar = vVar2;
                    }
                    boolean isInstance = io.sentry.hints.b.class.isInstance(hint.b("sentry:typeCheckHint"));
                    boolean z6 = (io.sentry.hints.d.class.isInstance(hint.b("sentry:typeCheckHint")) || q0.class.isInstance(hint.b("sentry:typeCheckHint"))) ? false : true;
                    if (sentryEvent2 != null && !isInstance && !z6) {
                        if (!sentryEvent2.f()) {
                        }
                        v5Var.getReplayController().captureReplay(Boolean.valueOf(sentryEvent2.e() != null));
                    }
                    if (sentryEvent2 == null) {
                        try {
                            str = sentryEvent2.S;
                        } catch (io.sentry.exception.b | IOException e9) {
                            e = e9;
                            v5Var.getLogger().i(SentryLevel.WARNING, e, "Capturing event %s failed.", vVar);
                            vVar = io.sentry.protocol.v.f11895e;
                            if (iScope != null) {
                            }
                            return vVar;
                        }
                    } else {
                        str = null;
                    }
                    n10 = n(sentryEvent2, sentryEvent2 == null ? r(hint) : null, g6Var2, t(iScope, hint, sentryEvent2, str), null);
                    hint.a();
                    if (n10 != null) {
                        vVar = y(n10, hint);
                    }
                    if (iScope != null && (n6 = iScope.n()) != null && io.sentry.hints.l.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                        b10 = hint.b("sentry:typeCheckHint");
                        if (b10 instanceof io.sentry.hints.c) {
                            n6.d(l6.ABORTED, false, null);
                        } else {
                            ((io.sentry.hints.c) b10).f(n6.k());
                            n6.d(l6.ABORTED, false, hint);
                        }
                    }
                    return vVar;
                }
                z5 = false;
                if (sentryEvent2 != null) {
                }
                vVar = io.sentry.protocol.v.f11895e;
                if (sentryEvent2 != null) {
                    vVar = vVar2;
                }
                boolean isInstance2 = io.sentry.hints.b.class.isInstance(hint.b("sentry:typeCheckHint"));
                if (io.sentry.hints.d.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                }
                if (sentryEvent2 != null) {
                    if (!sentryEvent2.f()) {
                    }
                    v5Var.getReplayController().captureReplay(Boolean.valueOf(sentryEvent2.e() != null));
                }
                if (sentryEvent2 == null) {
                }
                n10 = n(sentryEvent2, sentryEvent2 == null ? r(hint) : null, g6Var2, t(iScope, hint, sentryEvent2, str), null);
                hint.a();
                if (n10 != null) {
                }
                if (iScope != null) {
                    b10 = hint.b("sentry:typeCheckHint");
                    if (b10 instanceof io.sentry.hints.c) {
                    }
                }
                return vVar;
            }
        }
        if (k0.U(hint)) {
            if (iScope != null) {
                g6Var = iScope.A(new bc.a(this, v5, hint, 7));
                g6Var2 = g6Var;
                if (v5Var.getSampleRate() == null) {
                }
                if (v5Var.getSampleRate() != null) {
                }
                sentryEvent2 = v5;
                if (g6Var2 != null) {
                }
                z5 = false;
                if (sentryEvent2 != null) {
                }
                vVar = io.sentry.protocol.v.f11895e;
                if (sentryEvent2 != null) {
                }
                boolean isInstance22 = io.sentry.hints.b.class.isInstance(hint.b("sentry:typeCheckHint"));
                if (io.sentry.hints.d.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                }
                if (sentryEvent2 != null) {
                }
                if (sentryEvent2 == null) {
                }
                n10 = n(sentryEvent2, sentryEvent2 == null ? r(hint) : null, g6Var2, t(iScope, hint, sentryEvent2, str), null);
                hint.a();
                if (n10 != null) {
                }
                if (iScope != null) {
                }
                return vVar;
            }
            v5Var.getLogger().u(SentryLevel.INFO, "Scope is null on client.captureEvent", new Object[0]);
        }
        g6Var = null;
        g6Var2 = g6Var;
        if (v5Var.getSampleRate() == null) {
        }
        if (v5Var.getSampleRate() != null) {
        }
        sentryEvent2 = v5;
        if (g6Var2 != null) {
        }
        z5 = false;
        if (sentryEvent2 != null) {
        }
        vVar = io.sentry.protocol.v.f11895e;
        if (sentryEvent2 != null) {
        }
        boolean isInstance222 = io.sentry.hints.b.class.isInstance(hint.b("sentry:typeCheckHint"));
        if (io.sentry.hints.d.class.isInstance(hint.b("sentry:typeCheckHint"))) {
        }
        if (sentryEvent2 != null) {
        }
        if (sentryEvent2 == null) {
        }
        n10 = n(sentryEvent2, sentryEvent2 == null ? r(hint) : null, g6Var2, t(iScope, hint, sentryEvent2, str), null);
        hint.a();
        if (n10 != null) {
        }
        if (iScope != null) {
        }
        return vVar;
    }

    public void l(Float f2, boolean z5) {
        SpringAnimation springAnimation;
        gj.c cVar = (gj.c) this.f594b;
        if (cVar == null) {
            throw new IllegalStateException("Controller should not be null");
        }
        n1 n1Var = (n1) cVar.f9329e;
        com.facebook.react.runtime.r rVar = new com.facebook.react.runtime.r(13, this);
        h8.a aVar = new h8.a(9, cVar);
        float f10 = z5 ? n1Var.p0().f1514d : n1Var.o0().f1514d;
        j2.g gVar = new j2.g(aVar, rVar);
        if (Float.isNaN(f10)) {
            springAnimation = new SpringAnimation(gVar);
        } else {
            SpringAnimation springAnimation2 = new SpringAnimation(gVar, 0);
            springAnimation2.f1884m = null;
            springAnimation2.f1885n = Float.MAX_VALUE;
            springAnimation2.f1886o = false;
            springAnimation2.f1884m = new j2.i(f10);
            springAnimation = springAnimation2;
        }
        if (springAnimation.f1884m == null) {
            springAnimation.f1884m = new j2.i();
        }
        j2.i spring = springAnimation.f1884m;
        Intrinsics.checkExpressionValueIsNotNull(spring, "spring");
        spring.a(1.0f);
        spring.b(1500.0f);
        if (f2 != null) {
            springAnimation.a = f2.floatValue();
        }
        m3.q qVar = new m3.q(1, this);
        ArrayList arrayList = springAnimation.k;
        if (!arrayList.contains(qVar)) {
            arrayList.add(qVar);
        }
        springAnimation.g();
        this.f598f = springAnimation;
    }

    public void m(f4 f4Var, IScope iScope) {
        if (iScope != null) {
            if (f4Var.f11546v == null) {
                f4Var.f11546v = iScope.R();
            }
            if (f4Var.F == null) {
                f4Var.F = iScope.Q();
            }
            if (f4Var.f11547w == null) {
                f4Var.f11547w = new HashMap(new HashMap(iScope.D()));
            } else {
                for (Map.Entry entry : iScope.D().entrySet()) {
                    if (!f4Var.f11547w.containsKey(entry.getKey())) {
                        f4Var.f11547w.put((String) entry.getKey(), (String) entry.getValue());
                    }
                }
            }
            if (f4Var.J == null) {
                f4Var.J = new ArrayList(new ArrayList(iScope.w()));
            } else {
                Queue w5 = iScope.w();
                List list = f4Var.J;
                if (list != null && !w5.isEmpty()) {
                    list.addAll(w5);
                    Collections.sort(list, (g4) this.f596d);
                }
            }
            if (f4Var.L == null) {
                f4Var.L = new HashMap(new HashMap(iScope.getExtras()));
            } else {
                for (Map.Entry entry2 : iScope.getExtras().entrySet()) {
                    if (!f4Var.L.containsKey(entry2.getKey())) {
                        f4Var.L.put((String) entry2.getKey(), entry2.getValue());
                    }
                }
            }
            io.sentry.protocol.c cVar = f4Var.f11544e;
            for (Map.Entry entry3 : new io.sentry.protocol.c(iScope.J()).f11763d.entrySet()) {
                if (!cVar.a(entry3.getKey())) {
                    cVar.k(entry3.getValue(), (String) entry3.getKey());
                }
            }
        }
    }

    public io.sentry.internal.debugmeta.c n(f4 f4Var, ArrayList arrayList, g6 g6Var, n6 n6Var, g3 g3Var) {
        io.sentry.protocol.v vVar;
        v5 v5Var = (v5) this.f594b;
        ArrayList arrayList2 = new ArrayList();
        int i5 = 5;
        if (f4Var != null) {
            c1 serializer = v5Var.getSerializer();
            Charset charset = o4.f11701d;
            d9.a.L(serializer, "ISerializer is required.");
            e4.c cVar = new e4.c((Callable) new com.facebook.react.runtime.o(i5, serializer, f4Var));
            arrayList2.add(new o4(new p4(v4.resolve(f4Var), new l4(cVar, 9), "application/json", null, null), new l4(cVar, 10)));
            vVar = f4Var.f11543d;
        } else {
            vVar = null;
        }
        if (g6Var != null) {
            arrayList2.add(o4.d(v5Var.getSerializer(), g6Var));
        }
        if (g3Var != null) {
            long maxTraceFileSize = v5Var.getMaxTraceFileSize();
            c1 serializer2 = v5Var.getSerializer();
            Charset charset2 = o4.f11701d;
            File file = g3Var.f11560d;
            e4.c cVar2 = new e4.c((Callable) new com.discord.crash_reporting.d(file, maxTraceFileSize, g3Var, serializer2, 2));
            arrayList2.add(new o4(new p4(v4.Profile, new l4(cVar2, 6), "application-json", file.getName(), null), new l4(cVar2, 8)));
            if (vVar == null) {
                vVar = new io.sentry.protocol.v(g3Var.T);
            }
        }
        if (arrayList != null) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                io.sentry.a aVar = (io.sentry.a) it.next();
                c1 serializer3 = v5Var.getSerializer();
                ILogger logger = v5Var.getLogger();
                long maxAttachmentSize = v5Var.getMaxAttachmentSize();
                Charset charset3 = o4.f11701d;
                e4.c cVar3 = new e4.c((Callable) new com.discord.crash_reporting.d(aVar, maxAttachmentSize, serializer3, logger, 1));
                arrayList2.add(new o4(new p4(v4.Attachment, new l4(cVar3, 4), aVar.f10999e, aVar.f10998d, aVar.f11000f), new l4(cVar3, i5)));
            }
        }
        if (arrayList2.isEmpty()) {
            return null;
        }
        return new io.sentry.internal.debugmeta.c(new k4(vVar, v5Var.getSdkVersion(), n6Var), arrayList2);
    }

    public io.sentry.internal.debugmeta.c o(y4 y4Var) {
        ArrayList arrayList = new ArrayList();
        v5 v5Var = (v5) this.f594b;
        c1 serializer = v5Var.getSerializer();
        Charset charset = o4.f11701d;
        d9.a.L(serializer, "ISerializer is required.");
        e4.c cVar = new e4.c((Callable) new com.facebook.react.runtime.o(4, serializer, y4Var));
        arrayList.add(new o4(new p4(v4.Log, new l4(cVar, 2), "application/vnd.sentry.items.log+json", (String) null, (String) null, (String) null, Integer.valueOf(y4Var.f12090d.size())), new l4(cVar, 3)));
        return new io.sentry.internal.debugmeta.c(new k4(null, v5Var.getSdkVersion(), null), arrayList);
    }

    public io.sentry.internal.debugmeta.c p(c5 c5Var) {
        ArrayList arrayList = new ArrayList();
        v5 v5Var = (v5) this.f594b;
        c1 serializer = v5Var.getSerializer();
        Charset charset = o4.f11701d;
        d9.a.L(serializer, "ISerializer is required.");
        e4.c cVar = new e4.c((Callable) new com.facebook.react.runtime.o(7, serializer, c5Var));
        arrayList.add(new o4(new p4(v4.TraceMetric, new l4(cVar, 16), "application/vnd.sentry.items.trace-metric+json", (String) null, (String) null, (String) null, Integer.valueOf(c5Var.f11427d.size())), new l4(cVar, 17)));
        return new io.sentry.internal.debugmeta.c(new k4(null, v5Var.getSdkVersion(), null), arrayList);
    }

    public io.sentry.internal.debugmeta.c q(final x5 x5Var, final l3 l3Var, n6 n6Var, final boolean z5) {
        ArrayList arrayList = new ArrayList();
        v5 v5Var = (v5) this.f594b;
        final c1 serializer = v5Var.getSerializer();
        final ILogger logger = v5Var.getLogger();
        Charset charset = o4.f11701d;
        final File file = x5Var.M;
        e4.c cVar = new e4.c(new Callable() { // from class: io.sentry.m4
            @Override // java.util.concurrent.Callable
            public final Object call() {
                c1 c1Var = c1.this;
                x5 x5Var2 = x5Var;
                File file2 = file;
                ILogger iLogger = logger;
                boolean z6 = z5;
                try {
                    ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                    try {
                        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(byteArrayOutputStream, o4.f11701d));
                        try {
                            LinkedHashMap linkedHashMap = new LinkedHashMap();
                            c1Var.a(x5Var2, bufferedWriter);
                            linkedHashMap.put(v4.ReplayEvent.getItemType(), byteArrayOutputStream.toByteArray());
                            byteArrayOutputStream.reset();
                            l3 l3Var2 = l3Var;
                            if (l3Var2 != null) {
                                c1Var.a(l3Var2, bufferedWriter);
                                linkedHashMap.put(v4.ReplayRecording.getItemType(), byteArrayOutputStream.toByteArray());
                                byteArrayOutputStream.reset();
                            }
                            if (file2 != null && file2.exists()) {
                                byte[] F0 = m3.n.F0(10485760L, file2.getPath());
                                if (F0.length > 0) {
                                    linkedHashMap.put(v4.ReplayVideo.getItemType(), F0);
                                }
                            }
                            byte[] k = o4.k(linkedHashMap);
                            bufferedWriter.close();
                            byteArrayOutputStream.close();
                            if (file2 != null) {
                                if (z6) {
                                    return k;
                                }
                            }
                            return k;
                        } finally {
                        }
                    } finally {
                    }
                } catch (Throwable th2) {
                    try {
                        iLogger.k(SentryLevel.ERROR, "Could not serialize replay recording", th2);
                        if (file2 == null) {
                            return null;
                        }
                        if (z6) {
                            m3.n.G(file2.getParentFile());
                            return null;
                        }
                        file2.delete();
                        return null;
                    } finally {
                        if (file2 != null) {
                            if (z6) {
                                m3.n.G(file2.getParentFile());
                            } else {
                                file2.delete();
                            }
                        }
                    }
                }
            }
        });
        arrayList.add(new o4(new p4(v4.ReplayVideo, new l4(cVar, 14), null, null, null), new l4(cVar, 15)));
        return new io.sentry.internal.debugmeta.c(new k4(x5Var.f11543d, v5Var.getSessionReplay().f12112m, n6Var), arrayList);
    }

    public int s() {
        gj.c cVar = (gj.c) this.f594b;
        if (cVar != null) {
            return ((n1) cVar.f9329e).n0().f1514d;
        }
        throw new IllegalStateException("Current WindowInsetsAnimationController is null.This should only be called if isAnimationInProgress() returns true");
    }

    public n6 t(IScope iScope, Hint hint, f4 f4Var, String str) {
        v5 v5Var = (v5) this.f594b;
        if (io.sentry.hints.b.class.isInstance(hint.b("sentry:typeCheckHint"))) {
            if (f4Var != null) {
                v5Var.getLogger();
                io.sentry.c cVar = new io.sentry.c();
                io.sentry.protocol.c cVar2 = f4Var.f11544e;
                i6 i5 = cVar2.i();
                cVar.b("sentry-trace_id", i5 != null ? i5.f11610d.toString() : null);
                cVar.b("sentry-public_key", v5Var.retrieveParsedDsn().f12088b);
                cVar.b("sentry-release", f4Var.f11548x);
                cVar.b("sentry-environment", f4Var.f11549y);
                cVar.b("sentry-transaction", str);
                if (cVar.f11415e) {
                    cVar.f11413c = null;
                }
                cVar.b("sentry-sampled", null);
                if (cVar.f11415e) {
                    cVar.f11414d = null;
                }
                Object c6 = cVar2.c("replay_id");
                if (c6 != null && !c6.toString().equals(io.sentry.protocol.v.f11895e.toString())) {
                    cVar.b("sentry-replay_id", c6.toString());
                    cVar2.m("replay_id");
                }
                cVar.f11415e = false;
                return cVar.d();
            }
        } else if (iScope != null) {
            f1 n6 = iScope.n();
            return n6 != null ? n6.b() : ((io.sentry.c) iScope.L(new io.sentry.android.core.w(7, iScope, v5Var)).f7965v).d();
        }
        return null;
    }

    public int u(int i5) {
        gj.c cVar = (gj.c) this.f594b;
        if (cVar == null) {
            throw new IllegalStateException("Current WindowInsetsAnimationController is null.This should only be called if isAnimationInProgress() returns true");
        }
        n1 n1Var = (n1) cVar.f9329e;
        int i6 = n1Var.o0().f1514d;
        int i10 = n1Var.p0().f1514d;
        boolean z5 = this.a;
        int i11 = z5 ? i10 : i6;
        int i12 = z5 ? i6 : i10;
        int d6 = yo.j.d(i5, i6, i10);
        int i13 = n1Var.n0().f1514d - d6;
        n1Var.q0(Insets.b(0, 0, 0, d6), (d6 - i11) / (i12 - i11));
        return i13;
    }

    public SentryEvent v(SentryEvent sentryEvent, Hint hint, List list) {
        v5 v5Var = (v5) this.f594b;
        Iterator it = list.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            io.sentry.b0 b0Var = (io.sentry.b0) it.next();
            try {
                boolean z5 = b0Var instanceof io.sentry.android.core.g0;
                boolean isInstance = io.sentry.hints.b.class.isInstance(hint.b("sentry:typeCheckHint"));
                if (isInstance && z5) {
                    ((io.sentry.android.core.g0) b0Var).f(sentryEvent, hint);
                } else if (!isInstance && !z5) {
                    sentryEvent = b0Var.f(sentryEvent, hint);
                }
            } catch (Throwable th2) {
                v5Var.getLogger().i(SentryLevel.ERROR, th2, "An exception occurred while processing event by processor: %s", b0Var.getClass().getName());
            }
            if (sentryEvent == null) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Event was dropped by a processor: %s", b0Var.getClass().getName());
                v5Var.getClientReportRecorder().f(io.sentry.clientreport.d.EVENT_PROCESSOR, io.sentry.l.Error);
                break;
            }
        }
        return sentryEvent;
    }

    public io.sentry.protocol.d0 w(io.sentry.protocol.d0 d0Var, Hint hint, List list) {
        v5 v5Var = (v5) this.f594b;
        Iterator it = list.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            io.sentry.b0 b0Var = (io.sentry.b0) it.next();
            int size = d0Var.P.size();
            try {
                d0Var = b0Var.g(d0Var, hint);
            } catch (Throwable th2) {
                v5Var.getLogger().i(SentryLevel.ERROR, th2, "An exception occurred while processing transaction by processor: %s", b0Var.getClass().getName());
            }
            int size2 = d0Var == null ? 0 : d0Var.P.size();
            if (d0Var == null) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Transaction was dropped by a processor: %s", b0Var.getClass().getName());
                io.sentry.clientreport.f clientReportRecorder = v5Var.getClientReportRecorder();
                io.sentry.clientreport.d dVar = io.sentry.clientreport.d.EVENT_PROCESSOR;
                clientReportRecorder.f(dVar, io.sentry.l.Transaction);
                v5Var.getClientReportRecorder().n(dVar, io.sentry.l.Span, size + 1);
                break;
            }
            if (size2 < size) {
                int i5 = size - size2;
                v5Var.getLogger().u(SentryLevel.DEBUG, "%d spans were dropped by a processor: %s", Integer.valueOf(i5), b0Var.getClass().getName());
                v5Var.getClientReportRecorder().n(io.sentry.clientreport.d.EVENT_PROCESSOR, io.sentry.l.Span, i5);
            }
        }
        return d0Var;
    }

    public void x() {
        this.f594b = null;
        this.f595c = null;
        this.a = false;
        SpringAnimation springAnimation = (SpringAnimation) this.f598f;
        if (springAnimation != null) {
            springAnimation.b();
        }
        this.f598f = null;
        this.f596d = null;
    }

    public io.sentry.protocol.v y(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        io.sentry.transport.g gVar = (io.sentry.transport.g) this.f595c;
        v5 v5Var = (v5) this.f594b;
        h5 beforeEnvelopeCallback = v5Var.getBeforeEnvelopeCallback();
        if (beforeEnvelopeCallback != null) {
            try {
                SpotlightIntegration spotlightIntegration = (SpotlightIntegration) beforeEnvelopeCallback;
                try {
                    spotlightIntegration.f10990i.submit(new com.mkuczera.haptic.a(10, spotlightIntegration, cVar));
                } catch (RejectedExecutionException e9) {
                    spotlightIntegration.f10989e.k(SentryLevel.WARNING, "Spotlight envelope submission rejected.", e9);
                }
            } catch (Throwable th2) {
                v5Var.getLogger().k(SentryLevel.ERROR, "The BeforeEnvelope callback threw an exception.", th2);
            }
        }
        u4.d().c(v5Var.getLogger());
        if (hint == null) {
            gVar.getClass();
            gVar.O(cVar, new Hint());
        } else {
            gVar.O(cVar, hint);
        }
        io.sentry.protocol.v vVar = ((k4) cVar.f11622e).f11640d;
        return vVar != null ? vVar : io.sentry.protocol.v.f11895e;
    }

    public boolean z(f4 f4Var, Hint hint) {
        if (k0.U(hint)) {
            return true;
        }
        ((v5) this.f594b).getLogger().u(SentryLevel.DEBUG, "Event was cached so not applying scope: %s", f4Var.f11543d);
        return false;
    }

    public s(v5 v5Var) {
        this.f596d = new g4();
        this.f594b = v5Var;
        this.a = true;
        h1 transportFactory = v5Var.getTransportFactory();
        if (transportFactory instanceof w2) {
            transportFactory = new g2(4);
            v5Var.setTransportFactory(transportFactory);
        }
        io.sentry.y retrieveParsedDsn = v5Var.retrieveParsedDsn();
        String sentryClientName = v5Var.getSentryClientName();
        URI uri = retrieveParsedDsn.f12089c;
        String uri2 = uri.resolve(uri.getPath() + "/envelope/").toString();
        String str = retrieveParsedDsn.f12088b;
        String str2 = retrieveParsedDsn.a;
        StringBuilder sb2 = new StringBuilder("Sentry sentry_version=7,sentry_client=");
        sb2.append(sentryClientName);
        sb2.append(",sentry_key=");
        sb2.append(str);
        sb2.append((str2 == null || str2.length() <= 0) ? "" : ",sentry_secret=".concat(str2));
        String sb3 = sb2.toString();
        HashMap hashMap = new HashMap();
        hashMap.put("User-Agent", sentryClientName);
        hashMap.put("X-Sentry-Auth", sb3);
        this.f595c = transportFactory.d(v5Var, new e4.e(uri2, hashMap));
        if (v5Var.getLogs().a) {
            this.f597e = v5Var.getLogs().f11687b.c(v5Var, this);
        } else {
            this.f597e = io.sentry.logger.d.f11663d;
        }
        if (v5Var.getMetrics().a) {
            this.f598f = v5Var.getMetrics().f11704b.mo1279c(v5Var, this);
        } else {
            this.f598f = io.sentry.metrics.c.f11679d;
        }
    }
}
