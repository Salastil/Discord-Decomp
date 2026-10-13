package j8;

import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.net.Uri;
import android.os.Bundle;
import android.os.SystemClock;
import android.text.Editable;
import android.text.Selection;
import com.facebook.common.internal.Fn;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.request.ImageRequest;
import ha.m;
import ie.m0;
import ie.n;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.Executors;
import k2.y;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import ks.g;
import okio.Buffer;
import ps.s;
import th.s1;
import ze.e;

/* loaded from: classes3.dex */
public class c implements t2.b, Fn, fc.a, m, g, n9.b, m0, jg.c, yb.b, tm.a {

    /* renamed from: d, reason: collision with root package name */
    public static c f12427d;

    /* renamed from: e, reason: collision with root package name */
    public static c f12428e;

    public static ArrayList b(List protocols) {
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        ArrayList arrayList = new ArrayList();
        for (Object obj : protocols) {
            if (((s) obj) != s.HTTP_1_0) {
                arrayList.add(obj);
            }
        }
        ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            arrayList2.add(((s) it.next()).f16585d);
        }
        return arrayList2;
    }

    public static byte[] h(List protocols) {
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        Buffer buffer = new Buffer();
        Iterator it = b(protocols).iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            buffer.U(str.length());
            buffer.l0(str);
        }
        return buffer.A(buffer.f16114e);
    }

    /* JADX WARN: Code restructure failed: missing block: B:35:0x0045, code lost:
    
        if (java.lang.Character.isHighSurrogate(r5) != false) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x0082, code lost:
    
        if (java.lang.Character.isLowSurrogate(r5) != false) goto L58;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x0075, code lost:
    
        if (r11 != false) goto L46;
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x00a2, code lost:
    
        if (r10 != (-1)) goto L70;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean n(m2.b bVar, Editable editable, int i5, int i6, boolean z5) {
        int min;
        if (editable != null && i5 >= 0 && i6 >= 0) {
            int selectionStart = Selection.getSelectionStart(editable);
            int selectionEnd = Selection.getSelectionEnd(editable);
            if (selectionStart != -1 && selectionEnd != -1 && selectionStart == selectionEnd) {
                if (z5) {
                    int max = Math.max(i5, 0);
                    int length = editable.length();
                    if (selectionStart >= 0 && length >= selectionStart && max >= 0) {
                        loop0: while (true) {
                            boolean z6 = false;
                            while (true) {
                                if (max == 0) {
                                    break loop0;
                                }
                                selectionStart--;
                                if (selectionStart >= 0) {
                                    char charAt = editable.charAt(selectionStart);
                                    if (z6) {
                                        break;
                                    }
                                    if (!Character.isSurrogate(charAt)) {
                                        max--;
                                    } else {
                                        if (Character.isHighSurrogate(charAt)) {
                                            break loop0;
                                        }
                                        z6 = true;
                                    }
                                } else if (!z6) {
                                    selectionStart = 0;
                                }
                            }
                            max--;
                        }
                    }
                    selectionStart = -1;
                    int max2 = Math.max(i6, 0);
                    min = editable.length();
                    if (selectionEnd >= 0 && min >= selectionEnd && max2 >= 0) {
                        loop2: while (true) {
                            boolean z7 = false;
                            while (true) {
                                if (max2 == 0) {
                                    min = selectionEnd;
                                    break loop2;
                                }
                                if (selectionEnd < min) {
                                    char charAt2 = editable.charAt(selectionEnd);
                                    if (z7) {
                                        break;
                                    }
                                    if (!Character.isSurrogate(charAt2)) {
                                        max2--;
                                        selectionEnd++;
                                    } else {
                                        if (Character.isLowSurrogate(charAt2)) {
                                            break loop2;
                                        }
                                        selectionEnd++;
                                        z7 = true;
                                    }
                                }
                            }
                            max2--;
                            selectionEnd++;
                        }
                    }
                    min = -1;
                    if (selectionStart != -1) {
                    }
                } else {
                    selectionStart = Math.max(selectionStart - i5, 0);
                    min = Math.min(selectionEnd + i6, editable.length());
                }
                y[] yVarArr = (y[]) editable.getSpans(selectionStart, min, y.class);
                if (yVarArr != null && yVarArr.length > 0) {
                    for (y yVar : yVarArr) {
                        int spanStart = editable.getSpanStart(yVar);
                        int spanEnd = editable.getSpanEnd(yVar);
                        selectionStart = Math.min(spanStart, selectionStart);
                        min = Math.max(spanEnd, min);
                    }
                    int max3 = Math.max(selectionStart, 0);
                    int min2 = Math.min(min, editable.length());
                    bVar.beginBatchEdit();
                    editable.delete(max3, min2);
                    bVar.endBatchEdit();
                    return true;
                }
            }
        }
        return false;
    }

    public static boolean o() {
        return Intrinsics.areEqual("Dalvik", System.getProperty("java.vm.name"));
    }

    public e a(Bundle bundle) {
        int i5 = bundle.getInt("error");
        if (i5 == 0) {
            return null;
        }
        bundle.getBoolean("is.error.remediable");
        return new xh.b(i5, null);
    }

    @Override // com.facebook.common.internal.Fn
    public Uri apply(Object obj) {
        ImageRequest imageRequest = (ImageRequest) obj;
        if (imageRequest != null) {
            return imageRequest.getSourceUri();
        }
        return null;
    }

    @Override // ha.m
    public int c(Object obj) {
        return ((oa.c) obj).j();
    }

    @Override // n9.b
    public boolean contains(int i5) {
        return false;
    }

    @Override // tm.a
    public String d() {
        return "onWillAppear";
    }

    @Override // fc.a
    public long e() {
        return SystemClock.elapsedRealtime();
    }

    @Override // ie.m0
    public Object f(Uri uri, n nVar) {
        return Long.valueOf(ke.d0.L(new BufferedReader(new InputStreamReader(nVar)).readLine()));
    }

    @Override // n9.b
    public CloseableReference g() {
        return null;
    }

    @Override // javax.inject.Provider
    public Object get() {
        return new h4.a(3, Executors.newSingleThreadExecutor());
    }

    @Override // tm.a
    /* renamed from: getEventName */
    public String getName() {
        return "topWillAppear";
    }

    @Override // n9.b
    public CloseableReference i() {
        return null;
    }

    @Override // n9.b
    public CloseableReference j(int i5) {
        return null;
    }

    @Override // n9.b
    public void k(int i5, CloseableReference bitmapReference) {
        Intrinsics.checkNotNullParameter(bitmapReference, "bitmapReference");
    }

    @Override // n9.b
    public void l(int i5, CloseableReference bitmapReference) {
        Intrinsics.checkNotNullParameter(bitmapReference, "bitmapReference");
    }

    public Signature[] m(PackageManager packageManager, String str) {
        return packageManager.getPackageInfo(str, 64).signatures;
    }

    @Override // jg.c
    public void onFailure(Exception exc) {
        s1.k.g(String.format("Could not sync active asset packs. %s", exc), new Object[0]);
    }

    @Override // n9.b
    public void clear() {
    }
}
