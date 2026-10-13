package nf;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Looper;
import android.util.Log;
import android.view.View;
import android.view.ViewParent;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.widget.TextView;
import aq.l;
import bs.d1;
import bs.j0;
import bs.v1;
import com.discord.jank_stats.JankScreenContext;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.UIManagerHelper;
import fo.n;
import io.sentry.ILogger;
import io.sentry.f4;
import io.sentry.y2;
import ip.a0;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.lang.annotation.Annotation;
import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import jq.k;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c1;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlinx.serialization.KSerializer;
import kq.o;
import kr.s;
import lp.w;
import nr.c0;
import nr.p1;
import nr.q;
import nr.x;
import sr.t;
import v3.y;
import vp.f0;
import yq.x0;

/* loaded from: classes3.dex */
public abstract class e {
    public static ClassLoader a;

    /* renamed from: b, reason: collision with root package name */
    public static Thread f15424b;

    /* renamed from: c, reason: collision with root package name */
    public static boolean f15425c;

    public static final void A(StringCompanionObject stringCompanionObject) {
        Intrinsics.checkNotNullParameter(stringCompanionObject, "<this>");
        v1 v1Var = v1.a;
    }

    public static final Object B(t tVar, boolean z5, t tVar2, Function2 function2) {
        Object qVar;
        Object T;
        try {
            qVar = !(function2 instanceof lo.a) ? ko.f.c(function2, tVar2, tVar) : ((Function2) TypeIntrinsics.beforeCheckcastToFunctionOfArity(function2, 2)).invoke(tVar2, tVar);
        } catch (c0 e9) {
            Throwable th2 = e9.f15600d;
            tVar.S(new q(th2, false));
            throw th2;
        } catch (Throwable th3) {
            qVar = new q(th3, false);
        }
        ko.a aVar = ko.a.f13464d;
        if (qVar == aVar || (T = tVar.T(qVar)) == x.f15679e) {
            return aVar;
        }
        tVar.o0();
        if (!(T instanceof q)) {
            return x.z(T);
        }
        if (!z5) {
            Throwable th4 = ((q) T).a;
            if ((th4 instanceof p1) && ((p1) th4).f15650d == tVar) {
                if (qVar instanceof q) {
                    throw ((q) qVar).a;
                }
                return qVar;
            }
        }
        throw ((q) T).a;
    }

    public static final int C(y state) {
        Intrinsics.checkNotNullParameter(state, "state");
        int ordinal = state.ordinal();
        if (ordinal == 0) {
            return 0;
        }
        int i5 = 1;
        if (ordinal != 1) {
            i5 = 2;
            if (ordinal != 2) {
                i5 = 3;
                if (ordinal != 3) {
                    i5 = 4;
                    if (ordinal != 4) {
                        if (ordinal == 5) {
                            return 5;
                        }
                        throw new n();
                    }
                }
            }
        }
        return i5;
    }

    public static wp.a D(x0 x0Var, boolean z5, f0 f0Var, int i5) {
        boolean z6 = (i5 & 1) != 0 ? false : z5;
        boolean z7 = (i5 & 2) == 0;
        if ((i5 & 4) != 0) {
            f0Var = null;
        }
        Intrinsics.checkNotNullParameter(x0Var, "<this>");
        return new wp.a(x0Var, z7, z6, f0Var != null ? c1.b(f0Var) : null, 34);
    }

    public static jq.h E(Function1 changeOptions) {
        Intrinsics.checkNotNullParameter(changeOptions, "changeOptions");
        k kVar = new k();
        changeOptions.invoke(kVar);
        kVar.a = true;
        return new jq.h(kVar);
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x00b0, code lost:
    
        if (r2 == null) goto L61;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static synchronized ClassLoader F() {
        ClassLoader classLoader;
        SecurityException e9;
        Thread thread;
        ThreadGroup threadGroup;
        synchronized (e.class) {
            if (a == null) {
                Thread thread2 = f15424b;
                ClassLoader classLoader2 = null;
                if (thread2 == null) {
                    ThreadGroup threadGroup2 = Looper.getMainLooper().getThread().getThreadGroup();
                    if (threadGroup2 == null) {
                        thread2 = null;
                    } else {
                        synchronized (Void.class) {
                            try {
                                try {
                                    int activeGroupCount = threadGroup2.activeGroupCount();
                                    ThreadGroup[] threadGroupArr = new ThreadGroup[activeGroupCount];
                                    threadGroup2.enumerate(threadGroupArr);
                                    int i5 = 0;
                                    int i6 = 0;
                                    while (true) {
                                        if (i6 >= activeGroupCount) {
                                            threadGroup = null;
                                            break;
                                        }
                                        threadGroup = threadGroupArr[i6];
                                        if ("dynamiteLoader".equals(threadGroup.getName())) {
                                            break;
                                        }
                                        i6++;
                                    }
                                    if (threadGroup == null) {
                                        threadGroup = new ThreadGroup(threadGroup2, "dynamiteLoader");
                                    }
                                    int activeCount = threadGroup.activeCount();
                                    Thread[] threadArr = new Thread[activeCount];
                                    threadGroup.enumerate(threadArr);
                                    while (true) {
                                        if (i5 >= activeCount) {
                                            thread = null;
                                            break;
                                        }
                                        thread = threadArr[i5];
                                        if ("GmsDynamite".equals(thread.getName())) {
                                            break;
                                        }
                                        i5++;
                                    }
                                    if (thread == null) {
                                        try {
                                            et.a aVar = new et.a(threadGroup, "GmsDynamite");
                                            try {
                                                aVar.setContextClassLoader(null);
                                                aVar.start();
                                                thread = aVar;
                                            } catch (SecurityException e10) {
                                                e9 = e10;
                                                thread = aVar;
                                                String message = e9.getMessage();
                                                StringBuilder sb2 = new StringBuilder(String.valueOf(message).length() + 39);
                                                sb2.append("Failed to enumerate thread/threadgroup ");
                                                sb2.append(message);
                                                Log.w("DynamiteLoaderV2CL", sb2.toString());
                                                thread2 = thread;
                                                f15424b = thread2;
                                            }
                                        } catch (SecurityException e11) {
                                            e9 = e11;
                                        }
                                    }
                                } finally {
                                }
                            } catch (SecurityException e12) {
                                e9 = e12;
                                thread = null;
                            }
                        }
                        thread2 = thread;
                    }
                    f15424b = thread2;
                }
                synchronized (thread2) {
                    try {
                        classLoader2 = f15424b.getContextClassLoader();
                    } catch (SecurityException e13) {
                        String message2 = e13.getMessage();
                        StringBuilder sb3 = new StringBuilder(String.valueOf(message2).length() + 41);
                        sb3.append("Failed to get thread context classloader ");
                        sb3.append(message2);
                        Log.w("DynamiteLoaderV2CL", sb3.toString());
                    }
                }
                a = classLoader2;
            }
            classLoader = a;
        }
        return classLoader;
    }

    public static final bs.d a(KSerializer elementSerializer) {
        Intrinsics.checkNotNullParameter(elementSerializer, "elementSerializer");
        return new bs.d(elementSerializer, 0);
    }

    public static final j0 b(KSerializer keySerializer, KSerializer valueSerializer) {
        Intrinsics.checkNotNullParameter(keySerializer, "keySerializer");
        Intrinsics.checkNotNullParameter(valueSerializer, "valueSerializer");
        return new j0(keySerializer, valueSerializer, 1);
    }

    public static final hq.c c(hq.c cVar, String str) {
        hq.e e9 = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return cVar.a(e9);
    }

    public static final Object d(Object possiblyPrimitiveType, boolean z5) {
        pq.c cVar;
        Intrinsics.checkNotNullParameter(aq.g.f2633c, "<this>");
        Intrinsics.checkNotNullParameter(possiblyPrimitiveType, "possiblyPrimitiveType");
        if (z5) {
            possiblyPrimitiveType = (l) possiblyPrimitiveType;
            Intrinsics.checkNotNullParameter(possiblyPrimitiveType, "possiblyPrimitiveType");
            if ((possiblyPrimitiveType instanceof aq.k) && (cVar = ((aq.k) possiblyPrimitiveType).f2642i) != null) {
                hq.c cVar2 = cVar.f16465v;
                if (cVar2 == null) {
                    pq.c.a(15);
                    throw null;
                }
                String d6 = pq.b.b(cVar2).d();
                Intrinsics.checkNotNullExpressionValue(d6, "getInternalName(...)");
                return aq.g.d(d6);
            }
        }
        return possiblyPrimitiveType;
    }

    public static final LinkedHashSet e(byte[] bytes) {
        ObjectInputStream objectInputStream;
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        if (bytes.length == 0) {
            return linkedHashSet;
        }
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bytes);
        try {
            try {
                objectInputStream = new ObjectInputStream(byteArrayInputStream);
            } catch (IOException e9) {
                e9.printStackTrace();
            }
            try {
                int readInt = objectInputStream.readInt();
                for (int i5 = 0; i5 < readInt; i5++) {
                    Uri uri = Uri.parse(objectInputStream.readUTF());
                    boolean readBoolean = objectInputStream.readBoolean();
                    Intrinsics.checkNotNullExpressionValue(uri, "uri");
                    linkedHashSet.add(new v3.d(readBoolean, uri));
                }
                Unit unit = Unit.a;
                objectInputStream.close();
                Unit unit2 = Unit.a;
                byteArrayInputStream.close();
                return linkedHashSet;
            } finally {
            }
        } finally {
        }
    }

    public static WritableMap f(jm.f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        WritableMap createMap = Arguments.createMap();
        createMap.putInt("handlerTag", handler.f12874d);
        createMap.putInt("state", handler.f12878h);
        createMap.putInt("numberOfTouches", handler.f12885q);
        createMap.putInt("eventType", handler.f12884p);
        createMap.putInt("pointerType", handler.I);
        WritableArray writableArray = handler.f12882n;
        handler.f12882n = null;
        if (writableArray != null) {
            createMap.putArray("changedTouches", writableArray);
        }
        WritableArray writableArray2 = handler.f12883o;
        handler.f12883o = null;
        if (writableArray2 != null) {
            createMap.putArray("allTouches", writableArray2);
        }
        if (handler.M && handler.f12878h == 4) {
            createMap.putInt("state", 2);
        }
        return createMap;
    }

    public static n1.c g(String type, Bundle data) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(data, "data");
        try {
            int hashCode = type.hashCode();
            if (hashCode == -1678407252) {
                if (type.equals("androidx.credentials.TYPE_DIGITAL_CREDENTIAL")) {
                    Intrinsics.checkNotNullParameter(data, "data");
                    try {
                        String string = data.getString("androidx.credentials.BUNDLE_KEY_RESPONSE_JSON");
                        Intrinsics.checkNotNull(string);
                        return new n1.d(string);
                    } catch (Exception unused) {
                        throw new r1.a();
                    }
                }
                throw new r1.a();
            }
            if (hashCode != -543568185) {
                if (hashCode == -95037569 && type.equals("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL")) {
                    Intrinsics.checkNotNullParameter(data, "data");
                    try {
                        String string2 = data.getString("androidx.credentials.BUNDLE_KEY_REGISTRATION_RESPONSE_JSON");
                        Intrinsics.checkNotNull(string2);
                        return new n1.f(string2, data);
                    } catch (Exception unused2) {
                        throw new r1.a();
                    }
                }
            } else if (type.equals("android.credentials.TYPE_PASSWORD_CREDENTIAL")) {
                Intrinsics.checkNotNullParameter(data, "data");
                return new n1.d("android.credentials.TYPE_PASSWORD_CREDENTIAL", data);
            }
            throw new r1.a();
        } catch (r1.a unused3) {
            Intrinsics.checkNotNullParameter(type, "type");
            Intrinsics.checkNotNullParameter(data, "data");
            n1.d dVar = new n1.d(type, data);
            if (type.length() > 0) {
                return dVar;
            }
            throw new IllegalArgumentException("type should not be empty");
        }
    }

    public static o1.l h(String type, String str) {
        Exception a10;
        Intrinsics.checkNotNullParameter(type, "type");
        try {
            q1.b bVar = new q1.b(new p1.a(26), null);
            if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_ABORT_ERROR")) {
                a10 = ks.n.a(new p1.a(0), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_CONSTRAINT_ERROR")) {
                a10 = ks.n.a(new p1.a(1), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_DATA_CLONE_ERROR")) {
                a10 = ks.n.a(new p1.a(2), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_DATA_ERROR")) {
                a10 = ks.n.a(new p1.a(3), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_ENCODING_ERROR")) {
                a10 = ks.n.a(new p1.a(4), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_HIERARCHY_REQUEST_ERROR")) {
                a10 = ks.n.a(new p1.a(5), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_IN_USE_ATTRIBUTE_ERROR")) {
                a10 = ks.n.a(new p1.a(6), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_INVALID_CHARACTER_ERROR")) {
                a10 = ks.n.a(new p1.a(7), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_INVALID_MODIFICATION_ERROR")) {
                a10 = ks.n.a(new p1.a(8), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_INVALID_NODE_TYPE_ERROR")) {
                a10 = ks.n.a(new p1.a(9), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_INVALID_STATE_ERROR")) {
                a10 = ks.n.a(new p1.a(10), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NAMESPACE_ERROR")) {
                a10 = ks.n.a(new p1.a(11), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NETWORK_ERROR")) {
                a10 = ks.n.a(new p1.a(12), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NO_MODIFICATION_ALLOWED_ERROR")) {
                a10 = ks.n.a(new p1.a(13), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NOT_ALLOWED_ERROR")) {
                a10 = ks.n.a(new p1.a(14), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NOT_FOUND_ERROR")) {
                a10 = ks.n.a(new p1.a(15), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NOT_READABLE_ERROR")) {
                a10 = ks.n.a(new p1.a(16), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_NOT_SUPPORTED_ERROR")) {
                a10 = ks.n.a(new p1.a(17), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_OPERATION_ERROR")) {
                a10 = ks.n.a(new p1.a(18), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_OPT_OUT_ERROR")) {
                a10 = ks.n.a(new p1.a(19), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_QUOTA_EXCEEDED_ERROR")) {
                a10 = ks.n.a(new p1.a(20), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_READ_ONLY_ERROR")) {
                a10 = ks.n.a(new p1.a(21), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_SECURITY_ERROR")) {
                a10 = ks.n.a(new p1.a(22), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_SYNTAX_ERROR")) {
                a10 = ks.n.a(new p1.a(23), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_TIMEOUT_ERROR")) {
                a10 = ks.n.a(new p1.a(24), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_TRANSACTION_INACTIVE_ERROR")) {
                a10 = ks.n.a(new p1.a(25), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_UNKNOWN_ERROR")) {
                a10 = ks.n.a(new p1.a(26), str, bVar);
            } else if (Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_VERSION_ERROR")) {
                a10 = ks.n.a(new p1.a(27), str, bVar);
            } else {
                if (!Intrinsics.areEqual(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/androidx.credentials.TYPE_WRONG_DOCUMENT_ERROR")) {
                    throw new r1.a();
                }
                a10 = ks.n.a(new p1.a(28), str, bVar);
            }
            return (o1.l) a10;
        } catch (r1.a unused) {
            return new o1.k(str, type);
        }
    }

    public static final op.d i(Annotation[] annotationArr, hq.c fqName) {
        Annotation annotation;
        Intrinsics.checkNotNullParameter(annotationArr, "<this>");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        int length = annotationArr.length;
        int i5 = 0;
        while (true) {
            if (i5 >= length) {
                annotation = null;
                break;
            }
            annotation = annotationArr[i5];
            if (Intrinsics.areEqual(op.c.a(com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(annotation))).a(), fqName)) {
                break;
            }
            i5++;
        }
        if (annotation != null) {
            return new op.d(annotation);
        }
        return null;
    }

    public static final ip.f j(a0 a0Var, hq.b classId) {
        Intrinsics.checkNotNullParameter(a0Var, "<this>");
        Intrinsics.checkNotNullParameter(classId, "classId");
        ip.i k = k(a0Var, classId);
        if (k instanceof ip.f) {
            return (ip.f) k;
        }
        return null;
    }

    public static final ip.i k(a0 a0Var, hq.b classId) {
        Intrinsics.checkNotNullParameter(a0Var, "<this>");
        Intrinsics.checkNotNullParameter(classId, "classId");
        a5.n nVar = o.a;
        Intrinsics.checkNotNullParameter(a0Var, "<this>");
        if (a0Var.d0(o.a) != null) {
            throw new ClassCastException();
        }
        ip.j0 D = a0Var.D(classId.a);
        hq.d dVar = classId.f10201b.a;
        dVar.getClass();
        List e9 = hq.d.e(dVar);
        ip.i a10 = ((w) D).E.a((hq.e) CollectionsKt.K(e9), qp.c.f16943y);
        if (a10 != null) {
            for (hq.e eVar : e9.subList(1, e9.size())) {
                if (a10 instanceof ip.f) {
                    ip.i a11 = ((ip.f) a10).h0().a(eVar, qp.c.f16943y);
                    a10 = a11 instanceof ip.f ? (ip.f) a11 : null;
                    if (a10 != null) {
                    }
                }
            }
            return a10;
        }
        return null;
    }

    public static final ip.f l(a0 a0Var, hq.b classId, e4.i notFoundClasses) {
        Intrinsics.checkNotNullParameter(a0Var, "<this>");
        Intrinsics.checkNotNullParameter(classId, "classId");
        Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
        ip.f j = j(a0Var, classId);
        return j != null ? j : notFoundClasses.o(classId, s.q(s.n(kr.o.c(ip.t.f12174d, classId), ip.s.f12168e)));
    }

    public static final ArrayList m(Annotation[] annotationArr) {
        Intrinsics.checkNotNullParameter(annotationArr, "<this>");
        ArrayList arrayList = new ArrayList(annotationArr.length);
        for (Annotation annotation : annotationArr) {
            arrayList.add(new op.d(annotation));
        }
        return arrayList;
    }

    public static final int n(Cursor c6, String name) {
        String str;
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(name, "name");
        int columnIndex = c6.getColumnIndex(name);
        if (columnIndex < 0) {
            columnIndex = c6.getColumnIndex("`" + name + '`');
            if (columnIndex < 0) {
                if (Build.VERSION.SDK_INT <= 25 && name.length() != 0) {
                    String[] columnNames = c6.getColumnNames();
                    Intrinsics.checkNotNullExpressionValue(columnNames, "columnNames");
                    Intrinsics.checkNotNullParameter(columnNames, "columnNames");
                    Intrinsics.checkNotNullParameter(name, "name");
                    String concat = ".".concat(name);
                    String h6 = k0.d.h('`', ".", name);
                    int length = columnNames.length;
                    int i5 = 0;
                    int i6 = 0;
                    while (i6 < length) {
                        String str2 = columnNames[i6];
                        int i10 = i5 + 1;
                        if (str2.length() >= name.length() + 2 && (kotlin.text.x.h(str2, concat, false) || (str2.charAt(0) == '`' && kotlin.text.x.h(str2, h6, false)))) {
                            columnIndex = i5;
                            break;
                        }
                        i6++;
                        i5 = i10;
                    }
                }
                columnIndex = -1;
            }
        }
        if (columnIndex >= 0) {
            return columnIndex;
        }
        try {
            String[] columnNames2 = c6.getColumnNames();
            Intrinsics.checkNotNullExpressionValue(columnNames2, "c.columnNames");
            str = kotlin.collections.x.A(columnNames2, null, null, null, null, 63);
        } catch (Exception e9) {
            Log.d("RoomCursorUtil", "Cannot collect column names for debug purposes", e9);
            str = JankScreenContext.UNKNOWN_SCREEN;
        }
        throw new IllegalArgumentException(a3.e.l("column '", name, "' does not exist. Available columns: ", str));
    }

    public static final KSerializer o(KSerializer kSerializer) {
        Intrinsics.checkNotNullParameter(kSerializer, "<this>");
        return kSerializer.getDescriptor().d() ? kSerializer : new d1(kSerializer);
    }

    public static final v3.a p(int i5) {
        if (i5 == 0) {
            return v3.a.f19180d;
        }
        if (i5 == 1) {
            return v3.a.f19181e;
        }
        throw new IllegalArgumentException(s4.h.e(i5, "Could not convert ", " to BackoffPolicy"));
    }

    public static final v3.q q(int i5) {
        if (i5 == 0) {
            return v3.q.f19212d;
        }
        if (i5 == 1) {
            return v3.q.f19213e;
        }
        if (i5 == 2) {
            return v3.q.f19214i;
        }
        if (i5 == 3) {
            return v3.q.f19215v;
        }
        if (i5 == 4) {
            return v3.q.f19216w;
        }
        if (Build.VERSION.SDK_INT < 30 || i5 != 5) {
            throw new IllegalArgumentException(s4.h.e(i5, "Could not convert ", " to NetworkType"));
        }
        return v3.q.f19217x;
    }

    public static final v3.x r(int i5) {
        if (i5 == 0) {
            return v3.x.f19221d;
        }
        if (i5 == 1) {
            return v3.x.f19222e;
        }
        throw new IllegalArgumentException(s4.h.e(i5, "Could not convert ", " to OutOfQuotaPolicy"));
    }

    public static final y s(int i5) {
        if (i5 == 0) {
            return y.f19224d;
        }
        if (i5 == 1) {
            return y.f19225e;
        }
        if (i5 == 2) {
            return y.f19226i;
        }
        if (i5 == 3) {
            return y.f19227v;
        }
        if (i5 == 4) {
            return y.f19228w;
        }
        if (i5 == 5) {
            return y.f19229x;
        }
        throw new IllegalArgumentException(s4.h.e(i5, "Could not convert ", " to State"));
    }

    public static final boolean t(ip.f classDescriptor) {
        Intrinsics.checkNotNullParameter(fp.d.a, "<this>");
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        if (!kq.e.l(classDescriptor)) {
            return false;
        }
        LinkedHashSet linkedHashSet = fp.d.f8852b;
        hq.b f2 = oq.e.f(classDescriptor);
        return CollectionsKt.E(linkedHashSet, f2 != null ? f2.e() : null);
    }

    public static c5.n u(Context context) {
        c5.n nVar = new c5.n(new d5.c(new io.sentry.internal.debugmeta.c(context.getApplicationContext(), 7)), new e4.l(new j8.b(5, (byte) 0)));
        c5.c cVar = nVar.f3351i;
        if (cVar != null) {
            cVar.f3326w = true;
            cVar.interrupt();
        }
        for (c5.g gVar : nVar.f3350h) {
            if (gVar != null) {
                gVar.f3335w = true;
                gVar.interrupt();
            }
        }
        c5.c cVar2 = new c5.c(nVar.f3345c, nVar.f3346d, nVar.f3347e, nVar.f3349g);
        nVar.f3351i = cVar2;
        cVar2.start();
        for (int i5 = 0; i5 < nVar.f3350h.length; i5++) {
            c5.g gVar2 = new c5.g(nVar.f3346d, nVar.f3348f, nVar.f3347e, nVar.f3349g);
            nVar.f3350h[i5] = gVar2;
            gVar2.start();
        }
        return nVar;
    }

    public static lm.e v(jm.f handler, int i5, lm.a eventHandlerType) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        Intrinsics.checkNotNullParameter(eventHandlerType, "eventHandlerType");
        lm.e eVar = (lm.e) lm.e.f14107w.acquire();
        if (eVar == null) {
            eVar = new lm.e();
            eVar.f14110i = 4;
        }
        View r5 = handler.r();
        eVar.init(UIManagerHelper.getSurfaceId(r5), r5.getId());
        eVar.f14108d = f(handler);
        eVar.f14109e = handler.f12892x;
        eVar.f14110i = i5;
        eVar.f14111v = eventHandlerType;
        return eVar;
    }

    public static hl.d w(Function1 builder) {
        Intrinsics.checkNotNullParameter(builder, "builder");
        hl.c cVar = new hl.c();
        cVar.a = Float.NaN;
        cVar.f10103i = true;
        builder.invoke(cVar);
        return new hl.d(cVar.a, cVar.f10096b, cVar.f10097c, cVar.f10098d, cVar.f10099e, cVar.f10100f, cVar.f10101g, cVar.f10102h, cVar.f10103i);
    }

    public static void x(EditorInfo editorInfo, InputConnection inputConnection, TextView textView) {
        if (inputConnection == null || editorInfo.hintText != null) {
            return;
        }
        for (ViewParent parent = textView.getParent(); parent instanceof View; parent = parent.getParent()) {
        }
    }

    public static final up.c y(e4.i iVar, yp.b annotationsOwner) {
        Intrinsics.checkNotNullParameter(iVar, "<this>");
        Intrinsics.checkNotNullParameter(annotationsOwner, "annotationsOwner");
        return new up.c(iVar, annotationsOwner, false);
    }

    public static void z(f4 f4Var, y2 y2Var, ILogger iLogger) {
        if (f4Var.f11543d != null) {
            y2Var.C0("event_id").o0(iLogger, f4Var.f11543d);
        }
        y2Var.C0("contexts").o0(iLogger, f4Var.f11544e);
        if (f4Var.f11545i != null) {
            y2Var.C0("sdk").o0(iLogger, f4Var.f11545i);
        }
        if (f4Var.f11546v != null) {
            y2Var.C0("request").o0(iLogger, f4Var.f11546v);
        }
        AbstractMap abstractMap = f4Var.f11547w;
        if (abstractMap != null && !abstractMap.isEmpty()) {
            y2Var.C0("tags").o0(iLogger, f4Var.f11547w);
        }
        if (f4Var.f11548x != null) {
            y2Var.C0("release").s(f4Var.f11548x);
        }
        if (f4Var.f11549y != null) {
            y2Var.C0("environment").s(f4Var.f11549y);
        }
        if (f4Var.E != null) {
            y2Var.C0("platform").s(f4Var.E);
        }
        if (f4Var.F != null) {
            y2Var.C0("user").o0(iLogger, f4Var.F);
        }
        if (f4Var.H != null) {
            y2Var.C0("server_name").s(f4Var.H);
        }
        if (f4Var.I != null) {
            y2Var.C0("dist").s(f4Var.I);
        }
        List list = f4Var.J;
        if (list != null && !list.isEmpty()) {
            y2Var.C0("breadcrumbs").o0(iLogger, f4Var.J);
        }
        if (f4Var.K != null) {
            y2Var.C0("debug_meta").o0(iLogger, f4Var.K);
        }
        AbstractMap abstractMap2 = f4Var.L;
        if (abstractMap2 == null || abstractMap2.isEmpty()) {
            return;
        }
        y2Var.C0("extra").o0(iLogger, f4Var.L);
    }
}
