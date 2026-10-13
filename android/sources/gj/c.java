package gj;

import af.i;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.os.Bundle;
import android.os.Parcel;
import android.os.ResultReceiver;
import android.text.TextUtils;
import android.util.Log;
import android.view.MenuItem;
import android.view.Window;
import android.view.WindowInsetsAnimationController;
import android.view.WindowManager;
import androidx.activity.result.ActivityResultCallback;
import androidx.appcompat.widget.ActionMenuView;
import androidx.appcompat.widget.Toolbar;
import androidx.appcompat.widget.t3;
import androidx.core.view.MenuProvider;
import androidx.core.view.n1;
import aq.m;
import bg.p1;
import com.android.billingclient.api.ProxyBillingActivityV2;
import com.discord.R;
import com.google.android.exoplayer2.Format;
import com.henninghall.date_picker.NativeRNDatePickerSpec;
import cp.b1;
import cp.e1;
import cp.h0;
import cp.h1;
import cp.j0;
import cp.l0;
import cp.n0;
import cp.p0;
import cp.u1;
import e4.p;
import ha.j;
import ha.k;
import ha.l;
import he.s;
import hn.f;
import hq.e;
import io.sentry.protocol.a0;
import ip.n;
import ip.o0;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.MissingFormatArgumentException;
import java.util.TreeMap;
import java.util.concurrent.atomic.AtomicInteger;
import jg.g;
import jk.d;
import ke.d0;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;
import le.q;
import lp.i0;
import lp.k0;
import n.h;
import n.u;
import org.json.JSONArray;
import org.json.JSONException;
import rf.v;

/* loaded from: classes3.dex */
public class c implements ActivityResultCallback, h, o0, m, ih.a, n, i, j, s, u, s8.a, q, d, n1.h, s8.c {

    /* renamed from: i, reason: collision with root package name */
    public static volatile c f9327i;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9328d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f9329e;

    public /* synthetic */ c(int i5, Object obj) {
        this.f9328d = i5;
        this.f9329e = obj;
    }

    public static io.sentry.protocol.u N(Throwable th2, io.sentry.protocol.m mVar, Long l6, List list, boolean z5) {
        Package r02 = th2.getClass().getPackage();
        String name = th2.getClass().getName();
        io.sentry.protocol.u uVar = new io.sentry.protocol.u();
        String message = th2.getMessage();
        if (r02 != null) {
            name = name.replace(r02.getName() + ".", "");
        }
        String name2 = r02 != null ? r02.getName() : null;
        if (list != null && !list.isEmpty()) {
            a0 a0Var = new a0(list);
            if (z5) {
                a0Var.f11757i = Boolean.TRUE;
            }
            uVar.f11892w = a0Var;
        }
        uVar.f11891v = l6;
        uVar.f11888d = name;
        uVar.f11893x = mVar;
        uVar.f11890i = name2;
        uVar.f11889e = message;
        return uVar;
    }

    public static boolean P(Bundle bundle) {
        return "1".equals(bundle.getString("gcm.n.e")) || "1".equals(bundle.getString("gcm.n.e".replace("gcm.n.", "gcm.notification.")));
    }

    public static String U(String str) {
        return str.startsWith("gcm.n.") ? str.substring(6) : str;
    }

    public void A(Throwable th2, AtomicInteger atomicInteger, HashSet hashSet, ArrayDeque arrayDeque, String str) {
        Thread currentThread;
        io.sentry.protocol.m mVar;
        boolean z5;
        int i5 = atomicInteger.get();
        while (th2 != null && hashSet.add(th2)) {
            if (str == null) {
                str = "chained";
            }
            if (th2 instanceof io.sentry.exception.a) {
                io.sentry.exception.a aVar = (io.sentry.exception.a) th2;
                io.sentry.protocol.m mVar2 = aVar.f11532d;
                Throwable th3 = aVar.f11533e;
                currentThread = aVar.f11534i;
                z5 = aVar.f11535v;
                th2 = th3;
                mVar = mVar2;
            } else {
                io.sentry.protocol.m mVar3 = new io.sentry.protocol.m();
                currentThread = Thread.currentThread();
                mVar = mVar3;
                z5 = false;
            }
            arrayDeque.addFirst(N(th2, mVar, Long.valueOf(currentThread.getId()), ((l) this.f9329e).T(th2.getStackTrace(), Boolean.FALSE.equals(mVar.f11838v)), z5));
            if (mVar.f11835d == null) {
                mVar.f11835d = str;
            }
            if (atomicInteger.get() >= 0) {
                mVar.F = Integer.valueOf(i5);
            }
            i5 = atomicInteger.incrementAndGet();
            mVar.E = Integer.valueOf(i5);
            Throwable[] suppressed = th2.getSuppressed();
            if (suppressed != null && suppressed.length > 0) {
                for (Throwable th4 : suppressed) {
                    A(th4, atomicInteger, hashSet, arrayDeque, "suppressed");
                }
            }
            th2 = th2.getCause();
            str = null;
            atomicInteger = atomicInteger;
            hashSet = hashSet;
            arrayDeque = arrayDeque;
        }
    }

    @Override // aq.m
    public aq.n B(e eVar) {
        String b10 = eVar.b();
        if ("d1".equals(b10)) {
            return new bq.c(this, 0);
        }
        if ("d2".equals(b10)) {
            return new bq.c(this, 1);
        }
        return null;
    }

    @Override // ha.j
    public void C(Object obj) {
        ((k) this.f9329e).getClass();
    }

    public op.n D(rp.l request) {
        Intrinsics.checkNotNullParameter(request, "request");
        hq.b bVar = request.a;
        hq.c cVar = bVar.a;
        String m5 = x.m(bVar.f10201b.a.a, '.', '$');
        if (!cVar.a.c()) {
            m5 = cVar.a.a + '.' + m5;
        }
        Class M = com.facebook.imagepipeline.nativecode.b.M((ClassLoader) this.f9329e, m5);
        if (M != null) {
            return new op.n(M);
        }
        return null;
    }

    public void E(boolean z5) {
        ((n1) this.f9329e).l0(z5);
    }

    public boolean F(String str) {
        String O = O(str);
        return "1".equals(O) || Boolean.parseBoolean(O);
    }

    public Integer H(String str) {
        String O = O(str);
        if (TextUtils.isEmpty(O)) {
            return null;
        }
        try {
            return Integer.valueOf(Integer.parseInt(O));
        } catch (NumberFormatException unused) {
            Log.w("NotificationParams", "Couldn't parse value of " + U(str) + "(" + O + ") into an int");
            return null;
        }
    }

    @Override // ip.n
    public Object I(i0 descriptor, Object obj) {
        Unit data = (Unit) obj;
        h0 h0Var = (h0) this.f9329e;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(data, "data");
        int i5 = (descriptor.R != null ? 1 : 0) + (descriptor.S != null ? 1 : 0);
        if (descriptor.f14155y) {
            if (i5 == 0) {
                return new l0(h0Var, descriptor);
            }
            if (i5 == 1) {
                return new n0(h0Var, descriptor);
            }
            if (i5 == 2) {
                return new p0(h0Var, descriptor);
            }
        } else {
            if (i5 == 0) {
                return new b1(h0Var, descriptor);
            }
            if (i5 == 1) {
                return new e1(h0Var, descriptor);
            }
            if (i5 == 2) {
                return new h1(h0Var, descriptor);
            }
        }
        throw new u1("Unsupported property: " + descriptor);
    }

    public JSONArray K(String str) {
        String O = O(str);
        if (TextUtils.isEmpty(O)) {
            return null;
        }
        try {
            return new JSONArray(O);
        } catch (JSONException unused) {
            Log.w("NotificationParams", "Malformed JSON for key " + U(str) + ": " + O + ", falling back to default");
            return null;
        }
    }

    public ArrayList L() {
        p pVar = (p) this.f9329e;
        String replaceAll = ((SimpleDateFormat) DateFormat.getDateTimeInstance(0, 0, pVar.f())).toLocalizedPattern().replace(",", "").replaceAll("\\('(.+?)'\\)", "\\${$1}").replaceAll("'.+?'", "").replaceAll("\\$\\{(.+?)\\}", "('$1')");
        ArrayList arrayList = new ArrayList(Arrays.asList(ik.c.values()));
        ArrayList arrayList2 = new ArrayList();
        ik.c cVar = ik.c.f10941d;
        arrayList.remove(cVar);
        arrayList2.add(cVar);
        char[] charArray = replaceAll.toCharArray();
        int length = charArray.length;
        int i5 = 0;
        while (true) {
            ik.c cVar2 = ik.c.f10945w;
            ik.c cVar3 = ik.c.f10943i;
            ik.c cVar4 = ik.c.f10942e;
            ik.c cVar5 = ik.c.f10946x;
            ik.c cVar6 = ik.c.f10944v;
            ik.c cVar7 = ik.c.f10947y;
            if (i5 >= length) {
                if (arrayList.contains(cVar7)) {
                    arrayList.remove(cVar7);
                    arrayList2.add(cVar7);
                }
                if (!arrayList.isEmpty()) {
                    Log.e(NativeRNDatePickerSpec.NAME, arrayList.size() + " wheel types cannot be ordered. Wheel type 0: " + arrayList.get(0));
                }
                ArrayList arrayList3 = new ArrayList();
                ik.b g6 = pVar.g();
                int ordinal = g6.ordinal();
                if (ordinal == 0) {
                    arrayList3.add(cVar6);
                    arrayList3.add(cVar3);
                    arrayList3.add(cVar4);
                } else if (ordinal == 1) {
                    arrayList3.add(cVar2);
                    arrayList3.add(cVar5);
                } else if (ordinal == 2) {
                    arrayList3.add(cVar);
                    arrayList3.add(cVar2);
                    arrayList3.add(cVar5);
                }
                if ((g6 == ik.b.f10938e || g6 == ik.b.f10939i) && ((c) pVar.f7997n).V()) {
                    arrayList3.add(cVar7);
                }
                ArrayList arrayList4 = new ArrayList();
                Iterator it = arrayList2.iterator();
                while (it.hasNext()) {
                    ik.c cVar8 = (ik.c) it.next();
                    if (arrayList3.contains(cVar8)) {
                        arrayList4.add(cVar8);
                    }
                }
                return arrayList4;
            }
            char c6 = charArray[i5];
            if (c6 != 'H') {
                if (c6 == 'M') {
                    cVar2 = cVar3;
                } else if (c6 == 'a') {
                    cVar2 = cVar7;
                } else if (c6 == 'd') {
                    cVar2 = cVar4;
                } else if (c6 != 'h') {
                    if (c6 == 'm') {
                        cVar2 = cVar5;
                    } else {
                        if (c6 != 'y') {
                            throw new Exception("Invalid pattern char: " + c6);
                        }
                        cVar2 = cVar6;
                    }
                }
            }
            try {
                if (arrayList.contains(cVar2)) {
                    arrayList.remove(cVar2);
                    arrayList2.add(cVar2);
                }
            } catch (Exception unused) {
            }
            i5++;
        }
    }

    public String M(Resources resources, String str, String str2) {
        String[] strArr;
        String O = O(str2);
        if (!TextUtils.isEmpty(O)) {
            return O;
        }
        String O2 = O(str2.concat("_loc_key"));
        if (TextUtils.isEmpty(O2)) {
            return null;
        }
        int identifier = resources.getIdentifier(O2, "string", str);
        if (identifier == 0) {
            Log.w("NotificationParams", U(str2.concat("_loc_key")) + " resource not found: " + str2 + " Default value will be used.");
            return null;
        }
        JSONArray K = K(str2.concat("_loc_args"));
        if (K == null) {
            strArr = null;
        } else {
            int length = K.length();
            strArr = new String[length];
            for (int i5 = 0; i5 < length; i5++) {
                strArr[i5] = K.optString(i5);
            }
        }
        if (strArr == null) {
            return resources.getString(identifier);
        }
        try {
            return resources.getString(identifier, strArr);
        } catch (MissingFormatArgumentException e9) {
            Log.w("NotificationParams", "Missing format argument for " + U(str2) + ": " + Arrays.toString(strArr) + " Default value will be used.", e9);
            return null;
        }
    }

    public String O(String str) {
        Bundle bundle = (Bundle) this.f9329e;
        if (!bundle.containsKey(str) && str.startsWith("gcm.n.")) {
            String replace = !str.startsWith("gcm.n.") ? str : str.replace("gcm.n.", "gcm.notification.");
            if (bundle.containsKey(replace)) {
                str = replace;
            }
        }
        return bundle.getString(str);
    }

    public String Q(String... strArr) {
        String str = "";
        for (String str2 : strArr) {
            if (str2.length() > 0) {
                str = TextUtils.isEmpty(str) ? str2 : ((Resources) this.f9329e).getString(R.string.exo_item_list, str, str2);
            }
        }
        return str;
    }

    public void R() {
        long j;
        qd.h hVar = (qd.h) this.f9329e;
        synchronized (ke.b.f13283i) {
            try {
                j = ke.b.j ? ke.b.k : -9223372036854775807L;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        hVar.f16840j0 = j;
        hVar.x(true);
    }

    public Bundle T() {
        Bundle bundle = (Bundle) this.f9329e;
        Bundle bundle2 = new Bundle(bundle);
        for (String str : bundle.keySet()) {
            if (!str.startsWith("google.c.a.") && !str.equals("from")) {
                bundle2.remove(str);
            }
        }
        return bundle2;
    }

    public boolean V() {
        p pVar = (p) this.f9329e;
        if (((ik.a) ((kk.a) pVar.j).a) != ik.a.f10935d) {
            return !android.text.format.DateFormat.is24HourFormat(com.mkuczera.haptic.d.f6615b);
        }
        DateFormat timeInstance = DateFormat.getTimeInstance(0, pVar.f());
        return (timeInstance instanceof SimpleDateFormat) && ((SimpleDateFormat) timeInstance).toPattern().contains("a");
    }

    @Override // ip.n
    public Object a(k0 k0Var, Object obj) {
        return g(k0Var, obj);
    }

    @Override // af.i
    public void accept(Object obj, Object obj2) {
        int i5 = this.f9328d;
        Object obj3 = this.f9329e;
        switch (i5) {
            case 10:
                g gVar = (g) obj2;
                df.a aVar = (df.a) ((df.c) obj).o();
                bf.j jVar = (bf.j) obj3;
                Parcel obtain = Parcel.obtain();
                obtain.writeInterfaceToken(aVar.f5731h);
                int i6 = xf.a.a;
                if (jVar == null) {
                    obtain.writeInt(0);
                } else {
                    obtain.writeInt(1);
                    jVar.writeToParcel(obtain, 0);
                }
                try {
                    aVar.f5730g.transact(1, obtain, null, 1);
                    obtain.recycle();
                    gVar.b(null);
                    return;
                } catch (Throwable th2) {
                    obtain.recycle();
                    throw th2;
                }
            default:
                qf.b bVar = new qf.b((g) obj2, 0);
                p1 p1Var = (p1) ((bg.n1) obj).o();
                Parcel obtain2 = Parcel.obtain();
                obtain2.writeInterfaceToken(p1Var.f2982g);
                int i10 = bg.n.a;
                obtain2.writeStrongBinder(bVar);
                obtain2.writeInt(1);
                ((v) obj3).writeToParcel(obtain2, 0);
                p1Var.b(1, obtain2);
                return;
        }
    }

    @Override // n.u
    public void b(n.j jVar, boolean z5) {
        ((androidx.appcompat.app.a) this.f9329e).J(jVar);
    }

    @Override // ip.o0
    public void c() {
        ip.p0 NO_SOURCE_FILE = ip.p0.f12153e;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE_FILE, "NO_SOURCE_FILE");
    }

    @Override // le.q
    public void d(hc.m mVar) {
        mVar.e(((WindowManager) this.f9329e).getDefaultDisplay());
    }

    @Override // n1.h
    public void e(Object obj) {
        o1.d e9 = (o1.d) obj;
        Intrinsics.checkNotNullParameter(e9, "e");
        nr.j jVar = (nr.j) this.f9329e;
        if (jVar.c()) {
            fo.q qVar = Result.f13476e;
            jVar.resumeWith(ki.b.i(e9));
        }
    }

    @Override // androidx.activity.result.ActivityResultCallback
    public void f(Object obj) {
        ProxyBillingActivityV2 proxyBillingActivityV2 = (ProxyBillingActivityV2) this.f9329e;
        f.a aVar = (f.a) obj;
        proxyBillingActivityV2.getClass();
        Intent intent = aVar.f8287e;
        int i5 = com.google.android.gms.internal.play_billing.s.e(intent, "ProxyBillingActivityV2").a;
        ResultReceiver resultReceiver = proxyBillingActivityV2.I;
        if (resultReceiver != null) {
            resultReceiver.send(i5, intent == null ? null : intent.getExtras());
        }
        int i6 = aVar.f8286d;
        if (i6 != -1 || i5 != 0) {
            com.google.android.gms.internal.play_billing.s.h("ProxyBillingActivityV2", "Billing program info dialog finished with resultCode " + i6 + " and billing's responseCode: " + i5);
        }
        proxyBillingActivityV2.finish();
    }

    @Override // ip.n
    public Object g(ip.v descriptor, Object obj) {
        Unit data = (Unit) obj;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(data, "data");
        return new j0((h0) this.f9329e, descriptor);
    }

    @Override // n.u
    public boolean h(n.j jVar) {
        Window.Callback callback = ((androidx.appcompat.app.a) this.f9329e).I.getCallback();
        if (callback == null) {
            return true;
        }
        callback.onMenuOpened(108, jVar);
        return true;
    }

    @Override // n.h
    public boolean i(n.j jVar, MenuItem menuItem) {
        boolean onMenuItemClick;
        switch (this.f9328d) {
            case 3:
                androidx.appcompat.widget.q qVar = ((ActionMenuView) this.f9329e).a0;
                if (qVar == null) {
                    return false;
                }
                Toolbar toolbar = (Toolbar) ((l) qVar).f9613d;
                Iterator it = toolbar.f888g0.f1540b.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        t3 t3Var = toolbar.f890i0;
                        onMenuItemClick = t3Var != null ? t3Var.onMenuItemClick(menuItem) : false;
                    } else if (((MenuProvider) it.next()).a(menuItem)) {
                        onMenuItemClick = true;
                    }
                }
                return onMenuItemClick;
            default:
                fh.n nVar = ((rg.e) this.f9329e).f8628w;
                return (nVar == null || f.d((f) ((hc.m) nVar).f9784e, menuItem)) ? false : true;
        }
    }

    @Override // aq.m
    public m k(hq.b bVar, e eVar) {
        return null;
    }

    @Override // s8.a
    public void l() {
        ((l8.a) this.f9329e).getClass();
    }

    @Override // ha.j
    public void m(Object obj) {
        ((k) this.f9329e).getClass();
    }

    public Object n(lp.h hVar, Object obj) {
        return g(hVar, obj);
    }

    @Override // s8.a
    public void o(s8.d reference, Throwable th2) {
        ((l8.a) this.f9329e).getClass();
        Intrinsics.checkNotNullParameter(reference, "reference");
        Object a = reference.a();
        p8.a.x("Fresco", "Finalized without closing: %x %x (type = %s).\nStack:\n%s", Integer.valueOf(System.identityHashCode(this)), Integer.valueOf(System.identityHashCode(reference)), a != null ? a.getClass().getName() : "<value is null>", th2 == null ? "" : Log.getStackTraceString(th2));
    }

    @Override // n1.h
    public void onResult(Object obj) {
        n1.c result = (n1.c) obj;
        Intrinsics.checkNotNullParameter(result, "result");
        nr.j jVar = (nr.j) this.f9329e;
        if (jVar.c()) {
            fo.q qVar = Result.f13476e;
            jVar.resumeWith(result);
        }
    }

    @Override // ha.j
    public void q(Object obj) {
        ((k) this.f9329e).getClass();
    }

    @Override // s8.c
    public void release(Object obj) {
        Bitmap bitmap = (Bitmap) obj;
        try {
            ((qa.c) this.f9329e).a(bitmap);
        } finally {
            bitmap.recycle();
        }
    }

    public void s(b3.a... migrations) {
        Intrinsics.checkNotNullParameter(migrations, "migrations");
        for (b3.a aVar : migrations) {
            int i5 = aVar.a;
            int i6 = aVar.f2732b;
            LinkedHashMap linkedHashMap = (LinkedHashMap) this.f9329e;
            Integer valueOf = Integer.valueOf(i5);
            Object obj = linkedHashMap.get(valueOf);
            if (obj == null) {
                obj = new TreeMap();
                linkedHashMap.put(valueOf, obj);
            }
            TreeMap treeMap = (TreeMap) obj;
            if (treeMap.containsKey(Integer.valueOf(i6))) {
                Log.w("ROOM", "Overriding migration " + treeMap.get(Integer.valueOf(i6)) + " with " + aVar);
            }
            treeMap.put(Integer.valueOf(i6), aVar);
        }
    }

    @Override // ih.a
    public void t(Typeface typeface) {
        ch.c cVar = (ch.c) this.f9329e;
        if (cVar.t(typeface)) {
            cVar.l(false);
        }
    }

    public String toString() {
        switch (this.f9328d) {
            case 5:
                StringBuilder sb2 = new StringBuilder();
                vp.q qVar = (vp.q) this.f9329e;
                sb2.append(qVar);
                sb2.append(": ");
                sb2.append(((Map) ys.d.O(qVar.G, vp.q.K[0])).keySet());
                return sb2.toString();
            default:
                return super.toString();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0074  */
    /* JADX WARN: Removed duplicated region for block: B:24:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String u(Format format) {
        String str;
        String Q;
        String str2 = format.f5229i;
        String str3 = format.f5227e;
        if (!TextUtils.isEmpty(str2) && !"und".equals(str2)) {
            int i5 = d0.a;
            Locale forLanguageTag = i5 >= 21 ? Locale.forLanguageTag(str2) : new Locale(str2);
            Locale locale = i5 >= 24 ? Locale.getDefault(Locale.Category.DISPLAY) : Locale.getDefault();
            str = forLanguageTag.getDisplayName(locale);
            if (!TextUtils.isEmpty(str)) {
                try {
                    int offsetByCodePoints = str.offsetByCodePoints(0, 1);
                    str = str.substring(0, offsetByCodePoints).toUpperCase(locale) + str.substring(offsetByCodePoints);
                } catch (IndexOutOfBoundsException unused) {
                }
                Q = Q(str, y(format));
                if (TextUtils.isEmpty(Q)) {
                    return Q;
                }
                if (TextUtils.isEmpty(str3)) {
                    str3 = "";
                }
                return str3;
            }
        }
        str = "";
        Q = Q(str, y(format));
        if (TextUtils.isEmpty(Q)) {
        }
    }

    @Override // n.h
    public void v(n.j jVar) {
        switch (this.f9328d) {
            case 3:
                h hVar = ((ActionMenuView) this.f9329e).S;
                if (hVar != null) {
                    hVar.v(jVar);
                    break;
                }
                break;
        }
    }

    @Override // ip.n
    public Object w(lp.j0 j0Var, Object obj) {
        return g(j0Var, obj);
    }

    @Override // aq.m
    public void x(e eVar, Object obj) {
        bq.e eVar2 = (bq.e) this.f9329e;
        String b10 = eVar.b();
        if ("k".equals(b10)) {
            if (obj instanceof Integer) {
                bq.a.f3135e.getClass();
                bq.a aVar = (bq.a) bq.a.f3136i.get((Integer) obj);
                if (aVar == null) {
                    aVar = bq.a.f3137v;
                }
                eVar2.f3154y = aVar;
                return;
            }
            return;
        }
        if ("mv".equals(b10)) {
            if (obj instanceof int[]) {
                eVar2.f3148d = (int[]) obj;
            }
        } else {
            if ("xs".equals(b10)) {
                if (obj instanceof String) {
                    String str = (String) obj;
                    if (str.isEmpty()) {
                        return;
                    }
                    eVar2.f3149e = str;
                    return;
                }
                return;
            }
            if (!"xi".equals(b10)) {
                "pn".equals(b10);
            } else if (obj instanceof Integer) {
                eVar2.f3150i = ((Integer) obj).intValue();
            }
        }
    }

    public String y(Format format) {
        Resources resources = (Resources) this.f9329e;
        int i5 = format.f5231w;
        String string = (i5 & 2) != 0 ? resources.getString(R.string.exo_track_role_alternate) : "";
        if ((i5 & 4) != 0) {
            string = Q(string, resources.getString(R.string.exo_track_role_supplementary));
        }
        if ((i5 & 8) != 0) {
            string = Q(string, resources.getString(R.string.exo_track_role_commentary));
        }
        return (i5 & 1088) != 0 ? Q(string, resources.getString(R.string.exo_track_role_closed_captions)) : string;
    }

    public void z(int i5, int[] iArr) {
        int[] iArr2;
        int[] iArr3;
        e4.e eVar;
        int i6;
        e4.e eVar2;
        e4.e eVar3;
        int i10;
        int i11;
        int i12 = i5;
        pj.a aVar = (pj.a) this.f9329e;
        if (iArr.length == 0) {
            throw new IllegalArgumentException();
        }
        int length = iArr.length;
        int i13 = 0;
        int i14 = 1;
        if (length <= 1 || iArr[0] != 0) {
            iArr2 = iArr;
        } else {
            int i15 = 1;
            while (i15 < length && iArr[i15] == 0) {
                i15++;
            }
            if (i15 == length) {
                iArr2 = new int[]{0};
            } else {
                int i16 = length - i15;
                int[] iArr4 = new int[i16];
                System.arraycopy(iArr, i15, iArr4, 0, i16);
                iArr2 = iArr4;
            }
        }
        int[] iArr5 = new int[i12];
        boolean z5 = true;
        for (int i17 = 0; i17 < i12; i17++) {
            int i18 = aVar.a[aVar.f16409g + i17];
            if (i18 == 0) {
                i11 = iArr2[iArr2.length - 1];
            } else {
                if (i18 == 1) {
                    i10 = 0;
                    for (int i19 : iArr2) {
                        pj.a aVar2 = pj.a.f16398h;
                        i10 ^= i19;
                    }
                } else {
                    i10 = iArr2[0];
                    int length2 = iArr2.length;
                    for (int i20 = 1; i20 < length2; i20++) {
                        i10 = aVar.b(i18, i10) ^ iArr2[i20];
                    }
                }
                i11 = i10;
            }
            iArr5[(i12 - 1) - i17] = i11;
            if (i11 != 0) {
                z5 = false;
            }
        }
        if (z5) {
            return;
        }
        e4.e eVar4 = new e4.e(aVar, iArr5);
        aVar.getClass();
        e4.e eVar5 = aVar.f16405c;
        if (i12 < 0) {
            throw new IllegalArgumentException();
        }
        int[] iArr6 = new int[i12 + 1];
        iArr6[0] = 1;
        e4.e eVar6 = new e4.e(aVar, iArr6);
        if (eVar6.n() >= eVar4.n()) {
            eVar6 = eVar4;
            eVar4 = eVar6;
        }
        e4.e eVar7 = eVar4;
        e4.e eVar8 = eVar6;
        e4.e eVar9 = aVar.f16406d;
        e4.e eVar10 = eVar5;
        while (eVar8.n() >= i12 / 2) {
            if (eVar8.v()) {
                throw new pj.b("r_{i-1} was zero");
            }
            int a = aVar.a(eVar8.m(eVar8.n()));
            e4.e eVar11 = eVar5;
            while (eVar7.n() >= eVar8.n() && !eVar7.v()) {
                int n6 = eVar7.n() - eVar8.n();
                int b10 = aVar.b(eVar7.m(eVar7.n()), a);
                if (n6 < 0) {
                    throw new IllegalArgumentException();
                }
                if (b10 == 0) {
                    i6 = i14;
                    eVar2 = eVar5;
                } else {
                    int[] iArr7 = new int[n6 + 1];
                    iArr7[i13] = b10;
                    i6 = i14;
                    eVar2 = new e4.e(aVar, iArr7);
                }
                eVar11 = eVar11.c(eVar2);
                int[] iArr8 = (int[]) eVar8.f7944i;
                pj.a aVar3 = (pj.a) eVar8.f7943e;
                if (n6 < 0) {
                    throw new IllegalArgumentException();
                }
                if (b10 == 0) {
                    eVar3 = aVar3.f16405c;
                } else {
                    int length3 = iArr8.length;
                    int[] iArr9 = new int[n6 + length3];
                    int i21 = 0;
                    while (i21 < length3) {
                        int i22 = i21;
                        iArr9[i22] = aVar3.b(iArr8[i22], b10);
                        i21 = i22 + 1;
                    }
                    eVar3 = new e4.e(aVar3, iArr9);
                }
                eVar7 = eVar7.c(eVar3);
                i14 = i6;
                i13 = 0;
            }
            int i23 = i14;
            pj.a aVar4 = (pj.a) eVar11.f7943e;
            if (!aVar4.equals((pj.a) eVar9.f7943e)) {
                throw new IllegalArgumentException("GenericGFPolys do not have same GenericGF field");
            }
            if (eVar11.v() || eVar9.v()) {
                eVar = aVar4.f16405c;
            } else {
                int[] iArr10 = (int[]) eVar11.f7944i;
                int length4 = iArr10.length;
                int[] iArr11 = (int[]) eVar9.f7944i;
                int length5 = iArr11.length;
                int[] iArr12 = new int[(length4 + length5) - 1];
                for (int i24 = 0; i24 < length4; i24++) {
                    int i25 = iArr10[i24];
                    int i26 = 0;
                    while (i26 < length5) {
                        int i27 = i24 + i26;
                        int i28 = i26;
                        iArr12[i27] = iArr12[i27] ^ aVar4.b(i25, iArr11[i28]);
                        i26 = i28 + 1;
                    }
                }
                eVar = new e4.e(aVar4, iArr12);
            }
            e4.e c6 = eVar.c(eVar10);
            if (eVar7.n() >= eVar8.n()) {
                throw new IllegalStateException("Division algorithm failed to reduce polynomial?");
            }
            e4.e eVar12 = eVar7;
            eVar7 = eVar8;
            eVar8 = eVar12;
            eVar10 = eVar9;
            i14 = i23;
            i13 = 0;
            eVar9 = c6;
            i12 = i5;
        }
        int i29 = i13;
        int i30 = i14;
        int m5 = eVar9.m(i29);
        if (m5 == 0) {
            throw new pj.b("sigmaTilde(0) was zero");
        }
        int a10 = aVar.a(m5);
        e4.e[] eVarArr = {eVar9.w(a10), eVar8.w(a10)};
        e4.e eVar13 = eVarArr[i29];
        e4.e eVar14 = eVarArr[i30];
        int n10 = eVar13.n();
        if (n10 == i30) {
            iArr3 = new int[]{eVar13.m(i30)};
        } else {
            int[] iArr13 = new int[n10];
            int i31 = i29;
            for (int i32 = 1; i32 < aVar.f16407e && i31 < n10; i32++) {
                if (eVar13.h(i32) == 0) {
                    iArr13[i31] = aVar.a(i32);
                    i31++;
                }
            }
            if (i31 != n10) {
                throw new pj.b("Error locator degree does not match number of roots");
            }
            iArr3 = iArr13;
        }
        int length6 = iArr3.length;
        int[] iArr14 = new int[length6];
        for (int i33 = i29; i33 < length6; i33++) {
            int a11 = aVar.a(iArr3[i33]);
            int i34 = 1;
            for (int i35 = i29; i35 < length6; i35++) {
                if (i33 != i35) {
                    int b11 = aVar.b(iArr3[i35], a11);
                    i34 = aVar.b(i34, (b11 & 1) == 0 ? b11 | 1 : b11 & (-2));
                }
            }
            int b12 = aVar.b(eVar14.h(a11), aVar.a(i34));
            iArr14[i33] = b12;
            if (aVar.f16409g != 0) {
                iArr14[i33] = aVar.b(b12, a11);
            }
        }
        for (int i36 = i29; i36 < iArr3.length; i36++) {
            int length7 = iArr.length - 1;
            int i37 = iArr3[i36];
            if (i37 == 0) {
                throw new IllegalArgumentException();
            }
            int i38 = length7 - aVar.f16404b[i37];
            if (i38 < 0) {
                throw new pj.b("Bad error location");
            }
            iArr[i38] = iArr[i38] ^ iArr14[i36];
        }
    }

    public /* synthetic */ c(qf.a aVar, v vVar) {
        this.f9328d = 29;
        this.f9329e = vVar;
    }

    public c(h0 container) {
        this.f9328d = 9;
        Intrinsics.checkNotNullParameter(container, "container");
        this.f9329e = container;
    }

    public c(vp.q packageFragment) {
        this.f9328d = 5;
        Intrinsics.checkNotNullParameter(packageFragment, "packageFragment");
        this.f9329e = packageFragment;
    }

    public c(ClassLoader classLoader) {
        this.f9328d = 25;
        Intrinsics.checkNotNullParameter(classLoader, "classLoader");
        this.f9329e = classLoader;
    }

    public c(int i5) {
        this.f9328d = i5;
        switch (i5) {
            case 1:
                this.f9329e = new LinkedHashMap();
                break;
            case 23:
                this.f9329e = new qa.s();
                break;
            default:
                this.f9329e = new HashSet();
                break;
        }
    }

    public c(Resources resources) {
        this.f9328d = 14;
        resources.getClass();
        this.f9329e = resources;
    }

    public c(WindowInsetsAnimationController windowInsetsAnimationController) {
        this.f9328d = 4;
        this.f9329e = new n1(windowInsetsAnimationController);
    }

    public c(Bundle bundle) {
        this.f9328d = 8;
        this.f9329e = new Bundle(bundle);
    }

    @Override // aq.m
    public void j() {
    }

    @Override // le.q
    public void r() {
    }

    private final void S(n.j jVar) {
    }

    @Override // aq.m
    public void G(e eVar, mq.f fVar) {
    }

    @Override // aq.m
    public void J(e eVar, hq.b bVar, e eVar2) {
    }
}
