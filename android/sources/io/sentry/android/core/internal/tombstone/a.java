package io.sentry.android.core.internal.tombstone;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import ij.o0;
import ij.r;
import ij.s0;
import ij.t;
import ij.v;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.e6;
import io.sentry.protocol.a0;
import io.sentry.protocol.c0;
import io.sentry.protocol.u;
import io.sentry.protocol.z;
import java.io.BufferedReader;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class a implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11199d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Object f11200e;

    public a(HttpURLConnection httpURLConnection) {
        this.f11200e = httpURLConnection;
    }

    public String c() {
        HttpURLConnection httpURLConnection = (HttpURLConnection) this.f11200e;
        boolean z5 = false;
        try {
            if (httpURLConnection.getResponseCode() / 100 == 2) {
                z5 = true;
            }
        } catch (IOException unused) {
        }
        if (z5) {
            return null;
        }
        try {
            StringBuilder sb2 = new StringBuilder();
            sb2.append("Unable to fetch ");
            sb2.append(httpURLConnection.getURL());
            sb2.append(". Failed with ");
            sb2.append(httpURLConnection.getResponseCode());
            sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(httpURLConnection.getErrorStream()));
            StringBuilder sb3 = new StringBuilder();
            while (true) {
                try {
                    String readLine = bufferedReader.readLine();
                    if (readLine != null) {
                        sb3.append(readLine);
                        sb3.append('\n');
                    } else {
                        try {
                            break;
                        } catch (Exception unused2) {
                        }
                    }
                } finally {
                    try {
                        bufferedReader.close();
                    } catch (Exception unused3) {
                    }
                }
            }
            sb2.append(sb3.toString());
            return sb2.toString();
        } catch (IOException e9) {
            x4.c.c("get error failed ", e9);
            return e9.getMessage();
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        switch (this.f11199d) {
            case 0:
                ((InputStream) this.f11200e).close();
                break;
            default:
                ((HttpURLConnection) this.f11200e).disconnect();
                break;
        }
    }

    public SentryEvent f() {
        ij.j iVar;
        InputStream inputStream = (InputStream) this.f11200e;
        o oVar = o.f11207h;
        if (inputStream == null) {
            byte[] bArr = t.f10923b;
            int length = bArr.length;
            iVar = new ij.h(bArr, 0, length, false);
            try {
                iVar.e(length);
            } catch (v e9) {
                throw new IllegalArgumentException(e9);
            }
        } else {
            iVar = new ij.i(inputStream);
        }
        r g6 = r.g(oVar, iVar, ij.l.a());
        if (!r.d(g6, true)) {
            throw new v(new s0().getMessage());
        }
        o oVar2 = (o) g6;
        SentryEvent sentryEvent = new SentryEvent();
        sentryEvent.R = SentryLevel.FATAL;
        sentryEvent.E = "native";
        io.sentry.protocol.n nVar = new io.sentry.protocol.n();
        k kVar = k.f11201e;
        o0 o0Var = oVar2.f11209e;
        StringBuilder sb2 = new StringBuilder();
        Iterator it = o0Var.iterator();
        if (it.hasNext()) {
            while (true) {
                sb2.append((CharSequence) it.next());
                if (!it.hasNext()) {
                    break;
                }
                sb2.append((CharSequence) " ");
            }
        }
        String sb3 = sb2.toString();
        Locale locale = Locale.ROOT;
        nVar.f11842d = s4.h.f("Fatal exit pid = 0 (", sb3, ")");
        sentryEvent.N = nVar;
        ArrayList arrayList = new ArrayList();
        Iterator it2 = oVar2.f11211g.iterator();
        if (it2.hasNext()) {
            throw s4.h.b(it2);
        }
        io.sentry.protocol.d dVar = new io.sentry.protocol.d();
        dVar.f11773e = new ArrayList(arrayList);
        sentryEvent.K = dVar;
        u uVar = new u();
        uVar.f11891v = Long.valueOf(0);
        ArrayList arrayList2 = new ArrayList(1);
        arrayList2.add(uVar);
        sentryEvent.Q = new e6(arrayList2);
        ArrayList d6 = sentryEvent.d();
        Objects.requireNonNull(d6);
        u uVar2 = (u) d6.get(0);
        ArrayList arrayList3 = new ArrayList();
        Iterator it3 = Collections.unmodifiableMap(oVar2.f11210f).entrySet().iterator();
        while (it3.hasNext()) {
            l lVar = (l) ((Map.Entry) it3.next()).getValue();
            c0 c0Var = new c0();
            c0Var.f11765d = Long.valueOf(((Integer) r4.getKey()).intValue());
            lVar.getClass();
            c0Var.f11767i = "";
            ArrayList arrayList4 = new ArrayList();
            Iterator it4 = lVar.f11206f.iterator();
            if (it4.hasNext()) {
                throw s4.h.b(it4);
            }
            a0 a0Var = new a0();
            a0Var.f11755d = arrayList4;
            a0Var.f11758v = z.NONE;
            HashMap hashMap = new HashMap();
            Iterator it5 = lVar.f11205e.iterator();
            if (it5.hasNext()) {
                throw s4.h.b(it5);
            }
            a0Var.f11756e = hashMap;
            c0Var.F = a0Var;
            c0Var.f11769w = Boolean.TRUE;
            uVar2.f11892w = a0Var;
            arrayList3.add(c0Var);
        }
        sentryEvent.P = new e6(arrayList3);
        return sentryEvent;
    }

    public a(InputStream inputStream) {
        HashMap hashMap = new HashMap();
        this.f11200e = inputStream;
        hashMap.put("SIGILL", "IllegalInstruction");
        hashMap.put("SIGTRAP", "Trap");
        hashMap.put("SIGABRT", "Abort");
        hashMap.put("SIGBUS", "BusError");
        hashMap.put("SIGFPE", "FloatingPointException");
        hashMap.put("SIGSEGV", "Segfault");
    }
}
