package k2;

import android.content.ClipDescription;
import android.content.Context;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.Editable;
import android.text.Selection;
import android.text.TextPaint;
import android.util.Log;
import android.util.SparseArray;
import android.view.KeyEvent;
import androidx.appcompat.widget.b4;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.RecyclerView;
import bg.y0;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.imagepipeline.image.EncodedImage;
import com.google.android.exoplayer2.upstream.DataSource;
import com.google.android.gms.cloudmessaging.Rpc;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.henninghall.date_picker.pickers.AndroidNative;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.EOFException;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.Type;
import java.nio.ByteBuffer;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Calendar;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Set;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.atomic.AtomicReference;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IndexedValue;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.collections.o0;
import kotlin.collections.q0;
import kotlin.collections.u0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import op.d0;
import yq.b1;
import yq.c0;
import yq.c1;
import yq.h0;
import yq.k0;
import yq.p0;
import yq.s0;
import yq.x0;
import yq.z0;

/* loaded from: classes.dex */
public final class r implements m1.f, yb.b, OnCompleteListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13141d;

    /* renamed from: e, reason: collision with root package name */
    public Object f13142e;

    /* renamed from: i, reason: collision with root package name */
    public Object f13143i;

    /* renamed from: v, reason: collision with root package name */
    public Object f13144v;

    public /* synthetic */ r(int i5, boolean z5) {
        this.f13141d = i5;
    }

    public static void C(String str, Object... objArr) {
        String.format(Locale.US, str, objArr);
    }

    public static boolean q(Editable editable, KeyEvent keyEvent, boolean z5) {
        y[] yVarArr;
        if (KeyEvent.metaStateHasNoModifiers(keyEvent.getMetaState())) {
            int selectionStart = Selection.getSelectionStart(editable);
            int selectionEnd = Selection.getSelectionEnd(editable);
            if (selectionStart != -1 && selectionEnd != -1 && selectionStart == selectionEnd && (yVarArr = (y[]) editable.getSpans(selectionStart, selectionEnd, y.class)) != null && yVarArr.length > 0) {
                for (y yVar : yVarArr) {
                    int spanStart = editable.getSpanStart(yVar);
                    int spanEnd = editable.getSpanEnd(yVar);
                    if ((z5 && spanStart == selectionStart) || ((!z5 && spanEnd == selectionStart) || (selectionStart > spanStart && selectionStart < spanEnd))) {
                        editable.delete(spanStart, spanEnd);
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public static int t(int i5, int i6, nj.a aVar) {
        int i10 = 0;
        for (int i11 = 0; i11 < i6; i11++) {
            if (aVar.a(i5 + i11)) {
                i10 |= 1 << ((i6 - i11) - 1);
            }
        }
        return i10;
    }

    public boolean A(int i5) {
        int i6;
        int i10 = i5 + 1;
        nj.a aVar = (nj.a) this.f13142e;
        if (i10 > aVar.f15509e) {
            return false;
        }
        for (int i11 = 0; i11 < 5 && (i6 = i11 + i5) < aVar.f15509e; i11++) {
            if (i11 == 2) {
                if (!aVar.a(i5 + 2)) {
                    return false;
                }
            } else if (aVar.a(i6)) {
                return false;
            }
        }
        return true;
    }

    public void B(Context context, String str) {
        String[] strArr;
        InputStream inputStream;
        InputStream inputStream2;
        FileOutputStream fileOutputStream;
        FileOutputStream fileOutputStream2;
        lh.f fVar = (lh.f) this.f13143i;
        HashSet hashSet = (HashSet) this.f13142e;
        if (hashSet.contains(str)) {
            C("%s already loaded previously!", str);
            return;
        }
        io.sentry.internal.debugmeta.c cVar = null;
        try {
            fVar.getClass();
            System.loadLibrary(str);
            hashSet.add(str);
            C("%s (%s) was loaded normally!", str, null);
        } catch (UnsatisfiedLinkError e9) {
            C("Loading the library normally failed: %s", Log.getStackTraceString(e9));
            C("%s (%s) was not loaded normally, re-linking...", str, null);
            File w5 = w(context, str);
            if (!w5.exists()) {
                File dir = context.getDir("lib", 0);
                File w6 = w(context, str);
                fVar.getClass();
                File[] listFiles = dir.listFiles(new pb.a(lh.f.j(str), 0));
                if (listFiles != null) {
                    for (File file : listFiles) {
                        if (!file.getAbsolutePath().equals(w6.getAbsolutePath())) {
                            file.delete();
                        }
                    }
                }
                l8.a aVar = (l8.a) this.f13144v;
                String[] strArr2 = Build.SUPPORTED_ABIS;
                if (strArr2.length <= 0) {
                    String str2 = Build.CPU_ABI2;
                    strArr2 = (str2 == null || str2.length() == 0) ? new String[]{Build.CPU_ABI} : new String[]{Build.CPU_ABI, str2};
                }
                String j = lh.f.j(str);
                aVar.getClass();
                try {
                    io.sentry.internal.debugmeta.c i5 = l8.a.i(context, strArr2, j);
                    try {
                        if (i5 == null) {
                            try {
                                strArr = l8.a.k(context, j);
                            } catch (Exception e10) {
                                strArr = new String[]{e10.toString()};
                            }
                            StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Could not find '", j, "'. Looked for: ");
                            m5.append(Arrays.toString(strArr2));
                            m5.append(", but only found: ");
                            throw new ai.k(com.discord.chat.bridge.botuikit.a.j(m5, Arrays.toString(strArr), "."));
                        }
                        ZipFile zipFile = (ZipFile) i5.f11622e;
                        int i6 = 0;
                        while (true) {
                            int i10 = i6 + 1;
                            if (i6 < 5) {
                                C("Found %s! Extracting...", j);
                                try {
                                    if (w5.exists() || w5.createNewFile()) {
                                        try {
                                            inputStream2 = zipFile.getInputStream((ZipEntry) i5.f11623i);
                                            try {
                                                fileOutputStream2 = new FileOutputStream(w5);
                                                try {
                                                    byte[] bArr = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
                                                    long j5 = 0;
                                                    while (true) {
                                                        int read = inputStream2.read(bArr);
                                                        if (read == -1) {
                                                            break;
                                                        }
                                                        fileOutputStream2.write(bArr, 0, read);
                                                        j5 += read;
                                                        inputStream2 = inputStream2;
                                                    }
                                                    fileOutputStream2.flush();
                                                    try {
                                                        fileOutputStream2.getFD().sync();
                                                        if (j5 == w5.length()) {
                                                            l8.a.h(inputStream2);
                                                            l8.a.h(fileOutputStream2);
                                                            w5.setReadable(true, false);
                                                            w5.setExecutable(true, false);
                                                            w5.setWritable(true);
                                                            break;
                                                        }
                                                    } catch (FileNotFoundException | IOException unused) {
                                                    } catch (Throwable th2) {
                                                        th = th2;
                                                        inputStream = inputStream2;
                                                        fileOutputStream = fileOutputStream2;
                                                        l8.a.h(inputStream);
                                                        l8.a.h(fileOutputStream);
                                                        throw th;
                                                    }
                                                } catch (FileNotFoundException unused2) {
                                                    inputStream2 = inputStream2;
                                                } catch (IOException unused3) {
                                                    inputStream2 = inputStream2;
                                                } catch (Throwable th3) {
                                                    th = th3;
                                                    inputStream = inputStream2;
                                                }
                                            } catch (FileNotFoundException unused4) {
                                                fileOutputStream2 = null;
                                                l8.a.h(inputStream2);
                                                l8.a.h(fileOutputStream2);
                                                i6 = i10;
                                            } catch (IOException unused5) {
                                                fileOutputStream2 = null;
                                                l8.a.h(inputStream2);
                                                l8.a.h(fileOutputStream2);
                                                i6 = i10;
                                            } catch (Throwable th4) {
                                                th = th4;
                                                inputStream = inputStream2;
                                                fileOutputStream = null;
                                                l8.a.h(inputStream);
                                                l8.a.h(fileOutputStream);
                                                throw th;
                                            }
                                        } catch (FileNotFoundException unused6) {
                                            inputStream2 = null;
                                        } catch (IOException unused7) {
                                            inputStream2 = null;
                                        } catch (Throwable th5) {
                                            th = th5;
                                            inputStream = null;
                                        }
                                        l8.a.h(inputStream2);
                                        l8.a.h(fileOutputStream2);
                                    }
                                } catch (IOException unused8) {
                                }
                                i6 = i10;
                            }
                        }
                        try {
                            zipFile.close();
                            break;
                        } catch (IOException unused9) {
                        }
                    } catch (Throwable th6) {
                        th = th6;
                        cVar = i5;
                        if (cVar != null) {
                            try {
                                ((ZipFile) cVar.f11622e).close();
                            } catch (IOException unused10) {
                            }
                        }
                        throw th;
                    }
                } catch (Throwable th7) {
                    th = th7;
                }
            }
            String absolutePath = w5.getAbsolutePath();
            fVar.getClass();
            System.load(absolutePath);
            hashSet.add(str);
            C("%s (%s) was re-linked!", str, null);
        }
    }

    public boolean D(int i5, ConstraintWidget constraintWidget, s0.c cVar) {
        s0.b bVar = (s0.b) this.f13143i;
        int[] iArr = constraintWidget.f1245o0;
        int[] iArr2 = constraintWidget.f1249s;
        bVar.a = iArr[0];
        bVar.f17694b = iArr[1];
        bVar.f17695c = constraintWidget.n();
        bVar.f17696d = constraintWidget.k();
        bVar.f17701i = false;
        bVar.j = i5;
        boolean z5 = bVar.a == 3;
        boolean z6 = bVar.f17694b == 3;
        boolean z7 = z5 && constraintWidget.V > 0.0f;
        boolean z8 = z6 && constraintWidget.V > 0.0f;
        if (z7 && iArr2[0] == 4) {
            bVar.a = 1;
        }
        if (z8 && iArr2[1] == 4) {
            bVar.f17694b = 1;
        }
        ((ConstraintLayout.Measurer) cVar).b(constraintWidget, bVar);
        constraintWidget.J(bVar.f17697e);
        constraintWidget.G(bVar.f17698f);
        constraintWidget.D = bVar.f17700h;
        constraintWidget.D(bVar.f17699g);
        bVar.j = 0;
        return bVar.f17701i;
    }

    public String E() {
        if (!y()) {
            throw new NoSuchElementException();
        }
        String str = (String) this.f13144v;
        this.f13144v = null;
        return str;
    }

    public Object F(CharSequence charSequence, int i5, int i6, int i10, boolean z5, p pVar) {
        int i11;
        char c6;
        q qVar = new q((u) ((e4.i) this.f13143i).f7954i);
        int codePointAt = Character.codePointAt(charSequence, i5);
        int i12 = 0;
        boolean z6 = true;
        int i13 = i5;
        loop0: while (true) {
            i11 = i13;
            while (i13 < i6 && i12 < i10 && z6) {
                SparseArray sparseArray = qVar.f13137c.a;
                u uVar = sparseArray == null ? null : (u) sparseArray.get(codePointAt);
                if (qVar.a == 2) {
                    if (uVar != null) {
                        qVar.f13137c = uVar;
                        qVar.f13140f++;
                    } else {
                        if (codePointAt == 65038) {
                            qVar.a();
                        } else if (codePointAt != 65039) {
                            u uVar2 = qVar.f13137c;
                            if (uVar2.f13153b != null) {
                                if (qVar.f13140f != 1) {
                                    qVar.f13138d = uVar2;
                                    qVar.a();
                                } else if (qVar.b()) {
                                    qVar.f13138d = qVar.f13137c;
                                    qVar.a();
                                } else {
                                    qVar.a();
                                }
                                c6 = 3;
                            } else {
                                qVar.a();
                            }
                        }
                        c6 = 1;
                    }
                    c6 = 2;
                } else if (uVar == null) {
                    qVar.a();
                    c6 = 1;
                } else {
                    qVar.a = 2;
                    qVar.f13137c = uVar;
                    qVar.f13140f = 1;
                    c6 = 2;
                }
                qVar.f13139e = codePointAt;
                if (c6 == 1) {
                    i13 = Character.charCount(Character.codePointAt(charSequence, i11)) + i11;
                    if (i13 < i6) {
                        codePointAt = Character.codePointAt(charSequence, i13);
                    }
                } else if (c6 == 2) {
                    int charCount = Character.charCount(codePointAt) + i13;
                    if (charCount < i6) {
                        codePointAt = Character.codePointAt(charSequence, charCount);
                    }
                    i13 = charCount;
                } else if (c6 == 3) {
                    if (z5 || !x(charSequence, i11, i13, qVar.f13138d.f13153b)) {
                        z6 = pVar.b(charSequence, i11, i13, qVar.f13138d.f13153b);
                        i12++;
                    }
                }
            }
        }
        if (qVar.a == 2 && qVar.f13137c.f13153b != null && ((qVar.f13140f > 1 || qVar.b()) && i12 < i10 && z6 && (z5 || !x(charSequence, i11, i13, qVar.f13137c.f13153b)))) {
            pVar.b(charSequence, i11, i13, qVar.f13137c.f13153b);
        }
        return pVar.getResult();
    }

    public synchronized void G(qa.g gVar) {
        try {
            qa.g gVar2 = gVar.a;
            qa.g gVar3 = gVar.f16707d;
            if (gVar2 != null) {
                gVar2.f16707d = gVar3;
            }
            if (gVar3 != null) {
                gVar3.a = gVar2;
            }
            gVar.a = null;
            gVar.f16707d = null;
            if (gVar == ((qa.g) this.f13143i)) {
                this.f13143i = gVar3;
            }
            if (gVar == ((qa.g) this.f13144v)) {
                this.f13144v = gVar2;
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public boolean H(int i5, int i6, int i10, int i11) {
        if (i5 < 0) {
            i5 += i10;
            i6 += 4 - ((i10 + 4) & 7);
        }
        if (i6 < 0) {
            i6 += i11;
            i5 += 4 - ((i11 + 4) & 7);
        }
        ((nj.b) this.f13143i).f(i6, i5);
        return ((nj.b) this.f13142e).b(i6, i5);
    }

    public int I(int i5, int i6, int i10, int i11) {
        int i12 = i5 - 2;
        int i13 = i6 - 2;
        int i14 = (H(i12, i13, i10, i11) ? 1 : 0) << 1;
        int i15 = i6 - 1;
        if (H(i12, i15, i10, i11)) {
            i14 |= 1;
        }
        int i16 = i14 << 1;
        int i17 = i5 - 1;
        if (H(i17, i13, i10, i11)) {
            i16 |= 1;
        }
        int i18 = i16 << 1;
        if (H(i17, i15, i10, i11)) {
            i18 |= 1;
        }
        int i19 = i18 << 1;
        if (H(i17, i6, i10, i11)) {
            i19 |= 1;
        }
        int i20 = i19 << 1;
        if (H(i5, i13, i10, i11)) {
            i20 |= 1;
        }
        int i21 = i20 << 1;
        if (H(i5, i15, i10, i11)) {
            i21 |= 1;
        }
        int i22 = i21 << 1;
        return H(i5, i6, i10, i11) ? i22 | 1 : i22;
    }

    public void J(Object obj) {
        long a = x.c.a();
        if (a == x.e.a) {
            this.f13144v = obj;
            return;
        }
        synchronized (this.f13143i) {
            x.d dVar = (x.d) ((AtomicReference) this.f13142e).get();
            int a10 = dVar.a(a);
            if (a10 >= 0) {
                dVar.f20168c[a10] = obj;
            } else {
                ((AtomicReference) this.f13142e).set(dVar.b(a, obj));
                Unit unit = Unit.a;
            }
        }
    }

    public void K(String str) {
        if (str == null) {
            throw new NullPointerException("Null backendName");
        }
        this.f13142e = str;
    }

    public void L(ConstraintWidgetContainer constraintWidgetContainer, int i5, int i6, int i10) {
        int i11 = constraintWidgetContainer.a0;
        int i12 = constraintWidgetContainer.f1222b0;
        constraintWidgetContainer.a0 = 0;
        constraintWidgetContainer.f1222b0 = 0;
        constraintWidgetContainer.J(i6);
        constraintWidgetContainer.G(i10);
        if (i11 < 0) {
            constraintWidgetContainer.a0 = 0;
        } else {
            constraintWidgetContainer.a0 = i11;
        }
        if (i12 < 0) {
            constraintWidgetContainer.f1222b0 = 0;
        } else {
            constraintWidgetContainer.f1222b0 = i12;
        }
        ConstraintWidgetContainer constraintWidgetContainer2 = (ConstraintWidgetContainer) this.f13144v;
        constraintWidgetContainer2.f1260s0 = i5;
        constraintWidgetContainer2.P();
    }

    public Bundle M() {
        Bundle bundle = new Bundle();
        Integer num = (Integer) this.f13142e;
        if (num != null) {
            bundle.putInt("android.support.customtabs.extra.TOOLBAR_COLOR", num.intValue());
        }
        Integer num2 = (Integer) this.f13143i;
        if (num2 != null) {
            bundle.putInt("android.support.customtabs.extra.SECONDARY_TOOLBAR_COLOR", num2.intValue());
        }
        Integer num3 = (Integer) this.f13144v;
        if (num3 != null) {
            bundle.putInt("androidx.browser.customtabs.extra.NAVIGATION_BAR_COLOR", num3.intValue());
        }
        return bundle;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0043  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0078  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b1 N(op.h arrayType, wp.a attr, boolean z5) {
        fp.k kVar;
        boolean z6 = attr.f19976d;
        e4.i iVar = (e4.i) this.f13142e;
        up.a aVar = (up.a) iVar.f7952d;
        Intrinsics.checkNotNullParameter(arrayType, "arrayType");
        Intrinsics.checkNotNullParameter(attr, "attr");
        op.a0 a0Var = arrayType.f16162b;
        op.y yVar = a0Var instanceof op.y ? (op.y) a0Var : null;
        if (yVar != null) {
            Class cls = yVar.a;
            if (!Intrinsics.areEqual(cls, Void.TYPE)) {
                kVar = pq.c.b(cls.getName()).d();
                up.c cVar = new up.c(iVar, arrayType, true);
                if (kVar == null) {
                    c0 r5 = aVar.f18979o.g().r(kVar);
                    Intrinsics.checkNotNull(r5);
                    yq.y T = com.facebook.imagepipeline.nativecode.c.T(r5, new jp.i(new jp.h[]{r5.getAnnotations(), cVar}));
                    Intrinsics.checkNotNull(T, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
                    c0 c0Var = (c0) T;
                    return z6 ? c0Var : yq.c.e(c0Var, c0Var.x0(true));
                }
                yq.y O = O(a0Var, nf.e.D(x0.f21081e, z6, null, 6));
                if (z6) {
                    c0 i5 = aVar.f18979o.g().i(z5 ? c1.f21015w : c1.f21013i, O, cVar);
                    Intrinsics.checkNotNullExpressionValue(i5, "getArrayType(...)");
                    return i5;
                }
                c0 i6 = aVar.f18979o.g().i(c1.f21013i, O, cVar);
                Intrinsics.checkNotNullExpressionValue(i6, "getArrayType(...)");
                return yq.c.e(i6, aVar.f18979o.g().i(c1.f21015w, O, cVar).x0(true));
            }
        }
        kVar = null;
        up.c cVar2 = new up.c(iVar, arrayType, true);
        if (kVar == null) {
        }
    }

    public yq.y O(yp.d dVar, wp.a attr) {
        yq.y O;
        up.a aVar = (up.a) ((e4.i) this.f13142e).f7952d;
        Intrinsics.checkNotNullParameter(attr, "attr");
        if (dVar instanceof op.y) {
            Class cls = ((op.y) dVar).a;
            fp.k d6 = Intrinsics.areEqual(cls, Void.TYPE) ? null : pq.c.b(cls.getName()).d();
            c0 t5 = d6 != null ? aVar.f18979o.g().t(d6) : aVar.f18979o.g().x();
            Intrinsics.checkNotNull(t5);
            return t5;
        }
        boolean z5 = false;
        if (dVar instanceof op.p) {
            op.p pVar = (op.p) dVar;
            if (!attr.f19976d && attr.a != x0.f21080d) {
                z5 = true;
            }
            Type type = pVar.a;
            boolean d7 = pVar.d();
            if (!d7 && !z5) {
                c0 n6 = n(pVar, attr, null);
                return n6 != null ? n6 : ar.l.c(ar.k.f2685i, type.toString());
            }
            c0 n10 = n(pVar, attr.b(wp.b.f19981i), null);
            if (n10 == null) {
                return ar.l.c(ar.k.f2685i, type.toString());
            }
            c0 n11 = n(pVar, attr.b(wp.b.f19980e), n10);
            return n11 == null ? ar.l.c(ar.k.f2685i, type.toString()) : d7 ? new wp.h(n10, n11) : yq.c.e(n10, n11);
        }
        if (dVar instanceof op.h) {
            return N((op.h) dVar, attr, false);
        }
        if (dVar instanceof d0) {
            op.a0 c6 = ((d0) dVar).c();
            if (c6 != null && (O = O(c6, attr)) != null) {
                return O;
            }
            c0 n12 = aVar.f18979o.g().n();
            Intrinsics.checkNotNullExpressionValue(n12, "getDefaultBound(...)");
            return n12;
        }
        if (dVar == null) {
            c0 n13 = aVar.f18979o.g().n();
            Intrinsics.checkNotNullExpressionValue(n13, "getDefaultBound(...)");
            return n13;
        }
        throw new UnsupportedOperationException("Unsupported type: " + dVar);
    }

    public void P(ConstraintWidgetContainer constraintWidgetContainer) {
        ArrayList arrayList = (ArrayList) this.f13142e;
        arrayList.clear();
        int size = constraintWidgetContainer.f1257p0.size();
        for (int i5 = 0; i5 < size; i5++) {
            ConstraintWidget constraintWidget = (ConstraintWidget) constraintWidgetContainer.f1257p0.get(i5);
            int[] iArr = constraintWidget.f1245o0;
            if (iArr[0] == 3 || iArr[1] == 3) {
                arrayList.add(constraintWidget);
            }
        }
        constraintWidgetContainer.f1259r0.f17703b = true;
    }

    public void Q(cc.i iVar) {
        File file = (File) this.f13143i;
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            try {
                o8.b os2 = new o8.b(fileOutputStream);
                os2.f15793d = 0L;
                EncodedImage encodedImage = (EncodedImage) iVar.f3392e;
                ha.b this$0 = (ha.b) iVar.f3393i;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                Intrinsics.checkNotNullParameter(os2, "os");
                Intrinsics.checkNotNull(encodedImage);
                InputStream inputStream = encodedImage.getInputStream();
                if (inputStream == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                this$0.f9594c.m(inputStream, os2);
                os2.flush();
                long j = os2.f15793d;
                fileOutputStream.close();
                if (file.length() == j) {
                    return;
                }
                long length = file.length();
                StringBuilder n6 = k0.d.n(j, "File was not written completely. Expected: ", ", found: ");
                n6.append(length);
                throw new y0(n6.toString());
            } catch (Throwable th2) {
                fileOutputStream.close();
                throw th2;
            }
        } catch (FileNotFoundException e9) {
            j8.b bVar = ((k8.b) this.f13144v).f13204d;
            int i5 = k8.b.f13201g;
            bVar.getClass();
            throw e9;
        }
    }

    @Override // m1.f
    public Uri a() {
        return (Uri) this.f13142e;
    }

    @Override // m1.f
    public Object c() {
        return null;
    }

    public ArrayList d(String str) {
        switch (this.f13141d) {
            case 17:
                ArrayList<String> stringArrayList = ((Bundle) this.f13143i).getStringArrayList(str);
                if (stringArrayList == null) {
                    return new ArrayList();
                }
                String[] strArr = new String[stringArrayList.size()];
                for (int i5 = 0; i5 < stringArrayList.size(); i5++) {
                    String str2 = stringArrayList.get(i5);
                    if (str2 == null) {
                        str2 = "";
                    }
                    strArr[i5] = str2;
                }
                ((kt.g) this.f13144v).a.put(((String) this.f13142e).concat(str), strArr);
                return stringArrayList;
            default:
                Object obj = ((v3.f) this.f13143i).a.get(((String) this.f13142e).concat(str));
                String[] strArr2 = obj instanceof String[] ? (String[]) obj : null;
                if (strArr2 == null) {
                    return new ArrayList();
                }
                ArrayList<String> arrayList = new ArrayList<>(strArr2.length);
                for (String str3 : strArr2) {
                    if (true == str3.isEmpty()) {
                        str3 = null;
                    }
                    arrayList.add(str3);
                }
                ((Bundle) this.f13144v).putStringArrayList(str, arrayList);
                return arrayList;
        }
    }

    @Override // m1.f
    public Uri e() {
        return (Uri) this.f13144v;
    }

    public void f(int i5, String str) {
        h(String.valueOf(i5), str);
    }

    public void g(String str, boolean z5) {
        h(String.valueOf(z5), str);
    }

    @Override // javax.inject.Provider
    public Object get() {
        switch (this.f13141d) {
            case 23:
                return new wb.p(new l8.a(6), new j8.c(), (bc.c) ((f9.b) this.f13142e).get(), (cc.k) ((b4) this.f13143i).get(), (com.google.firebase.messaging.r) ((e4.i) this.f13144v).get());
            default:
                long a = x.c.a();
                if (a == x.e.a) {
                    return this.f13144v;
                }
                x.d dVar = (x.d) ((AtomicReference) this.f13142e).get();
                int a10 = dVar.a(a);
                if (a10 >= 0) {
                    return dVar.f20168c[a10];
                }
                return null;
        }
    }

    @Override // m1.f
    public ClipDescription getDescription() {
        return (ClipDescription) this.f13143i;
    }

    public void h(Object obj, String str) {
        r rVar = new r(8, false);
        ((r) this.f13144v).f13144v = rVar;
        this.f13144v = rVar;
        rVar.f13143i = obj;
        rVar.f13142e = str;
    }

    public void i(Calendar calendar) {
        lk.b bVar = (lk.b) this.f13143i;
        Iterator it = bVar.a().iterator();
        while (it.hasNext()) {
            nk.e eVar = (nk.e) it.next();
            if (!eVar.h()) {
                jk.e eVar2 = eVar.f15538d;
                eVar.f15539e.setTimeZone(eVar.a.l());
                eVar.f15536b = calendar;
                int b10 = eVar.b(calendar);
                if (b10 > -1) {
                    if (eVar2.getValue() == 0) {
                        eVar2.setValue(b10);
                    } else {
                        ((AndroidNative) eVar2).t(b10);
                    }
                }
            }
        }
        Iterator it2 = bVar.a().iterator();
        while (it2.hasNext()) {
            nk.e eVar3 = (nk.e) it2.next();
            if (eVar3.h()) {
                ((AndroidNative) eVar3.f15538d).t(eVar3.b(calendar));
            }
        }
    }

    public v3.s j() {
        Intrinsics.checkNotNullParameter(this, "builder");
        v3.s sVar = new v3.s((UUID) this.f13142e, (e4.o) this.f13143i, (LinkedHashSet) this.f13144v);
        v3.e eVar = ((e4.o) this.f13143i).j;
        boolean z5 = eVar.a() || eVar.f19196d || eVar.f19194b || eVar.f19195c;
        e4.o oVar = (e4.o) this.f13143i;
        if (oVar.f7980q) {
            if (z5) {
                throw new IllegalArgumentException("Expedited jobs only support network and storage constraints");
            }
            if (oVar.f7972g > 0) {
                throw new IllegalArgumentException("Expedited jobs cannot be delayed");
            }
        }
        UUID id2 = UUID.randomUUID();
        Intrinsics.checkNotNullExpressionValue(id2, "randomUUID()");
        Intrinsics.checkNotNullParameter(id2, "id");
        this.f13142e = id2;
        String newId = id2.toString();
        Intrinsics.checkNotNullExpressionValue(newId, "id.toString()");
        e4.o other = (e4.o) this.f13143i;
        Intrinsics.checkNotNullParameter(newId, "newId");
        Intrinsics.checkNotNullParameter(other, "other");
        this.f13143i = new e4.o(newId, other.f7967b, other.f7968c, other.f7969d, new v3.f(other.f7970e), new v3.f(other.f7971f), other.f7972g, other.f7973h, other.f7974i, new v3.e(other.j), other.k, other.f7975l, other.f7976m, other.f7977n, other.f7978o, other.f7979p, other.f7980q, other.f7981r, other.f7982s, other.f7984u, other.f7985v, other.f7986w, KeyCommandDescriptor.ModifierFlags.ALTERNATE);
        return sVar;
    }

    public wb.i k() {
        String str = ((String) this.f13142e) == null ? " backendName" : "";
        if (((tb.d) this.f13144v) == null) {
            str = str.concat(" priority");
        }
        if (str.isEmpty()) {
            return new wb.i((String) this.f13142e, (byte[]) this.f13143i, (tb.d) this.f13144v);
        }
        throw new IllegalStateException("Missing required properties:".concat(str));
    }

    public void l(String str) {
        switch (this.f13141d) {
            case 17:
                Bundle bundle = (Bundle) this.f13143i;
                String str2 = (String) this.f13142e;
                ((kt.g) this.f13144v).a.put(str2.concat(str), Integer.valueOf(bundle.getInt(str)));
                break;
            default:
                String str3 = (String) this.f13142e;
                Object obj = ((v3.f) this.f13143i).a.get(str3.concat(str));
                ((Bundle) this.f13144v).putInt(str, obj instanceof Integer ? ((Integer) obj).intValue() : 0);
                break;
        }
    }

    public i8.a m() {
        k8.b bVar = (k8.b) this.f13144v;
        bVar.f13205e.getClass();
        long currentTimeMillis = System.currentTimeMillis();
        File file = bVar.i((String) this.f13142e);
        try {
            w3.q.x((File) this.f13143i, file);
            if (file.exists()) {
                file.setLastModified(currentTimeMillis);
            }
            Intrinsics.checkNotNullParameter(file, "file");
            return new i8.a(file);
        } catch (n8.d e9) {
            e9.getCause();
            j8.b bVar2 = bVar.f13204d;
            int i5 = k8.b.f13201g;
            bVar2.getClass();
            throw e9;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:157:0x014a, code lost:
    
        if (r0 != yq.c1.f21015w) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x0229, code lost:
    
        if (r2.isEmpty() == false) goto L100;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r11v23, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r19v0 */
    /* JADX WARN: Type inference failed for: r19v1, types: [yq.c0] */
    /* JADX WARN: Type inference failed for: r19v4 */
    /* JADX WARN: Type inference failed for: r19v5 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public c0 n(op.p pVar, wp.a aVar, c0 c0Var) {
        k0 C;
        e4.i iVar;
        k0 k0Var;
        ?? r19;
        p0 n6;
        p0 p0Var;
        Iterator it;
        List list;
        e4.i c6;
        boolean z5;
        Object h0Var;
        Object obj;
        jp.h iVar2;
        List list2;
        r rVar;
        p0 p0Var2;
        s0 a;
        ip.f readOnly;
        r rVar2 = this;
        op.p pVar2 = pVar;
        x0 x0Var = aVar.a;
        wp.b bVar = aVar.f19974b;
        boolean z6 = aVar.f19976d;
        e4.i iVar3 = (e4.i) rVar2.f13142e;
        up.a aVar2 = (up.a) iVar3.f7952d;
        if (c0Var == null || (C = c0Var.q0()) == null) {
            C = yq.c.C(new up.c(iVar3, pVar2, false));
        }
        op.r rVar3 = pVar2.f16170b;
        if (rVar3 == null) {
            pVar2.getClass();
            throw new UnsupportedOperationException("Type not found: " + pVar2.a);
        }
        boolean z7 = false;
        if (rVar3 instanceof op.n) {
            op.n javaClass = (op.n) rVar3;
            r19 = 0;
            hq.c c8 = javaClass.c();
            if (c8 == null) {
                throw new AssertionError("Class type should have a FQ name: " + rVar3);
            }
            if (z6 && Intrinsics.areEqual(c8, wp.d.a)) {
                fp.n types = aVar2.f18980p;
                fp.m mVar = types.f8877c;
                KProperty property = fp.n.f8875e[0];
                mVar.getClass();
                k0Var = C;
                Intrinsics.checkNotNullParameter(types, "types");
                Intrinsics.checkNotNullParameter(property, "property");
                hq.e e9 = hq.e.e(com.facebook.imagepipeline.nativecode.c.i(property.getName()));
                Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
                iVar = iVar3;
                ip.i a10 = ((rq.o) types.f8876b.getValue()).a(e9, qp.c.f16938e);
                ip.f fVar = a10 instanceof ip.f ? (ip.f) a10 : null;
                readOnly = fVar == null ? types.a.o(new hq.b(fp.p.f8914i, e9), b0.c(1)) : fVar;
            } else {
                iVar = iVar3;
                k0Var = C;
                readOnly = hp.e.b(c8, aVar2.f18979o.g());
                if (readOnly == null) {
                    readOnly = null;
                } else {
                    Intrinsics.checkNotNullParameter(readOnly, "readOnly");
                    String str = hp.d.a;
                    hq.d g6 = kq.e.g(readOnly);
                    HashMap hashMap = hp.d.k;
                    if (hashMap.containsKey(g6)) {
                        if (bVar != wp.b.f19981i && x0Var != x0.f21080d) {
                            yp.d dVar = (yp.d) CollectionsKt.S(pVar2.c());
                            d0 d0Var = dVar instanceof d0 ? (d0) dVar : null;
                            if (d0Var != null && d0Var.c() != null) {
                                Type[] upperBounds = d0Var.a.getUpperBounds();
                                Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
                                if (Intrinsics.areEqual(kotlin.collections.x.t(upperBounds), Object.class)) {
                                    Intrinsics.checkNotNullParameter(readOnly, "readOnly");
                                    hq.d g10 = kq.e.g(readOnly);
                                    String str2 = hp.d.a;
                                    hq.c cVar = (hq.c) hashMap.get(g10);
                                    if (cVar == null) {
                                        throw new IllegalArgumentException("Given class " + readOnly + " is not a read-only collection");
                                    }
                                    ip.f j = oq.e.e(readOnly).j(cVar);
                                    Intrinsics.checkNotNullExpressionValue(j, "getBuiltInClassByFqName(...)");
                                    List parameters = j.n().getParameters();
                                    Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                                    ip.s0 s0Var = (ip.s0) CollectionsKt.S(parameters);
                                    if (s0Var != null) {
                                        c1 variance = s0Var.getVariance();
                                        if (variance != null) {
                                        }
                                    }
                                }
                            }
                        }
                        readOnly = hp.e.a(readOnly);
                    }
                }
            }
            if (readOnly == null) {
                qd.f fVar2 = aVar2.k;
                fVar2.getClass();
                Intrinsics.checkNotNullParameter(javaClass, "javaClass");
                ha.l lVar = (ha.l) fVar2.f16831e;
                if (lVar == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("resolver");
                    lVar = null;
                }
                readOnly = lVar.Z(javaClass);
            }
            if (readOnly == null || (n6 = readOnly.n()) == null) {
                pVar2.getClass();
                throw new UnsupportedOperationException("Type not found: " + pVar2.a);
            }
        } else {
            iVar = iVar3;
            k0Var = C;
            r19 = 0;
            r19 = 0;
            if (!(rVar3 instanceof op.b0)) {
                throw new IllegalStateException("Unknown classifier kind: " + rVar3);
            }
            ip.s0 a11 = ((up.e) rVar2.f13143i).a((op.b0) rVar3);
            n6 = a11 != null ? a11.n() : null;
        }
        if (n6 == null) {
            return r19;
        }
        boolean z8 = (bVar == wp.b.f19981i || z6 || x0Var == x0.f21080d) ? false : true;
        if (Intrinsics.areEqual(c0Var != null ? c0Var.r0() : r19, n6) && !pVar2.d() && z8) {
            return c0Var.x0(true);
        }
        boolean z10 = true;
        if (!pVar2.d()) {
            if (pVar2.c().isEmpty()) {
                List parameters2 = n6.getParameters();
                Intrinsics.checkNotNullExpressionValue(parameters2, "getParameters(...)");
                z10 = true;
            }
            z10 = false;
        }
        List<ip.s0> parameters3 = n6.getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters3, "getParameters(...)");
        if (!z10) {
            p0Var = n6;
            if (parameters3.size() == pVar.c().size()) {
                kotlin.collections.v m02 = CollectionsKt.m0(pVar.c());
                ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(m02, 10));
                Iterator it2 = m02.iterator();
                while (true) {
                    q0 q0Var = (q0) it2;
                    if (!q0Var.f13519e.hasNext()) {
                        list2 = CollectionsKt.i0(arrayList);
                        break;
                    }
                    IndexedValue indexedValue = (IndexedValue) q0Var.next();
                    int i5 = indexedValue.a;
                    yp.d dVar2 = (yp.d) indexedValue.f13483b;
                    parameters3.size();
                    ip.s0 s0Var2 = (ip.s0) parameters3.get(i5);
                    wp.a D = nf.e.D(x0.f21081e, z7, null, 7);
                    Intrinsics.checkNotNull(s0Var2);
                    if (dVar2 instanceof d0) {
                        d0 wildcardType = (d0) dVar2;
                        op.a0 c10 = wildcardType.c();
                        Type[] upperBounds2 = wildcardType.a.getUpperBounds();
                        Intrinsics.checkNotNullExpressionValue(upperBounds2, "getUpperBounds(...)");
                        c1 c1Var = !Intrinsics.areEqual(kotlin.collections.x.t(upperBounds2), Object.class) ? c1.f21015w : c1.f21014v;
                        if (c10 == null || !(s0Var2.getVariance() == c1.f21013i || c1Var == s0Var2.getVariance())) {
                            it = it2;
                            list = parameters3;
                            c6 = iVar;
                            z5 = false;
                            h0Var = z0.k(s0Var2, D);
                            Intrinsics.checkNotNullExpressionValue(h0Var, "makeStarProjection(...)");
                        } else {
                            c6 = iVar;
                            Intrinsics.checkNotNullParameter(c6, "c");
                            Intrinsics.checkNotNullParameter(wildcardType, "wildcardType");
                            if (wildcardType.c() == null) {
                                throw new IllegalArgumentException("Nullability annotations on unbounded wildcards aren't supported");
                            }
                            Iterator it3 = new up.c(c6, wildcardType, false).iterator();
                            while (true) {
                                kr.d dVar3 = (kr.d) it3;
                                if (!dVar3.hasNext()) {
                                    it = it2;
                                    list = parameters3;
                                    obj = null;
                                    break;
                                }
                                obj = dVar3.next();
                                jp.b bVar2 = (jp.b) obj;
                                hq.c[] cVarArr = rp.r.f17481b;
                                it = it2;
                                int length = cVarArr.length;
                                list = parameters3;
                                int i6 = 0;
                                while (i6 < length) {
                                    int i10 = length;
                                    int i11 = i6;
                                    if (Intrinsics.areEqual(bVar2.a(), cVarArr[i6])) {
                                        break;
                                    }
                                    i6 = i11 + 1;
                                    length = i10;
                                }
                                it2 = it;
                                parameters3 = list;
                            }
                            jp.b bVar3 = (jp.b) obj;
                            yq.y O = rVar2.O(c10, nf.e.D(x0.f21081e, false, null, 7));
                            if (bVar3 != null) {
                                ArrayList annotations = CollectionsKt.U(O.getAnnotations(), bVar3);
                                Intrinsics.checkNotNullParameter(annotations, "annotations");
                                if (annotations.isEmpty()) {
                                    iVar2 = jp.g.a;
                                    z5 = false;
                                } else {
                                    z5 = false;
                                    iVar2 = new jp.i(annotations, 0);
                                }
                                O = com.facebook.imagepipeline.nativecode.c.T(O, iVar2);
                            } else {
                                z5 = false;
                            }
                            h0Var = com.facebook.imagepipeline.nativecode.c.p(O, c1Var, s0Var2);
                        }
                    } else {
                        it = it2;
                        list = parameters3;
                        c6 = iVar;
                        z5 = false;
                        h0Var = new h0(rVar2.O(dVar2, D), c1.f21013i);
                    }
                    arrayList.add(h0Var);
                    it2 = it;
                    parameters3 = list;
                    iVar = c6;
                    z7 = z5;
                }
            } else {
                ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(parameters3, 10));
                Iterator it4 = parameters3.iterator();
                while (it4.hasNext()) {
                    arrayList2.add(new h0(ar.l.c(ar.k.P, ((ip.s0) it4.next()).getName().b())));
                }
                list2 = CollectionsKt.i0(arrayList2);
            }
        } else {
            ArrayList arrayList3 = new ArrayList(kotlin.collections.d0.l(parameters3, 10));
            p0 p0Var3 = r19;
            for (ip.s0 s0Var3 : parameters3) {
                if (com.facebook.imagepipeline.nativecode.c.J(s0Var3, p0Var3, aVar.f19977e)) {
                    a = z0.k(s0Var3, aVar);
                    p0Var2 = n6;
                    rVar = rVar2;
                } else {
                    p0 p0Var4 = n6;
                    rVar = rVar2;
                    p0Var2 = p0Var4;
                    a = wp.e.a(s0Var3, wp.a.a(aVar, null, pVar.d(), null, null, 59), (io.sentry.internal.debugmeta.c) rVar.f13144v, new yq.a0(aVar2.a, new wp.c(rVar2, s0Var3, aVar, p0Var4, pVar2)));
                }
                arrayList3.add(a);
                pVar2 = pVar;
                n6 = p0Var2;
                rVar2 = rVar;
                p0Var3 = null;
            }
            p0Var = n6;
            list2 = arrayList3;
        }
        return yq.c.t(list2, k0Var, p0Var, z8);
    }

    public String o(StringBuilder sb2, int i5) {
        String str = null;
        while (true) {
            yj.h p3 = p(i5, str);
            String a = yj.j.a(p3.f20944i);
            if (a != null) {
                sb2.append(a);
            }
            String valueOf = p3.f20946w ? String.valueOf(p3.f20945v) : null;
            int i6 = p3.f14426e;
            if (i5 == i6) {
                return sb2.toString();
            }
            i5 = i6;
            str = valueOf;
        }
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        Rpc rpc = (Rpc) this.f13142e;
        String str = (String) this.f13143i;
        ScheduledFuture scheduledFuture = (ScheduledFuture) this.f13144v;
        synchronized (rpc.a) {
            rpc.a.remove(str);
        }
        scheduledFuture.cancel(false);
    }

    /* JADX WARN: Code restructure failed: missing block: B:152:0x0216, code lost:
    
        if (r6 <= r2.f15509e) goto L133;
     */
    /* JADX WARN: Code restructure failed: missing block: B:153:0x0219, code lost:
    
        if (r5 >= r6) goto L241;
     */
    /* JADX WARN: Code restructure failed: missing block: B:155:0x021f, code lost:
    
        if (r2.a(r5) == false) goto L144;
     */
    /* JADX WARN: Code restructure failed: missing block: B:156:0x023d, code lost:
    
        r5 = r5 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:159:0x0240, code lost:
    
        r3.f3328b += 3;
        r3.f3329c = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:160:0x024b, code lost:
    
        r5 = new a5.h0(null, false, 14);
     */
    /* JADX WARN: Code restructure failed: missing block: B:162:0x0227, code lost:
    
        if (A(r3.f3328b) == false) goto L146;
     */
    /* JADX WARN: Code restructure failed: missing block: B:163:0x0229, code lost:
    
        r5 = r3.f3328b;
        r6 = r5 + 5;
        r7 = r2.f15509e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:164:0x022f, code lost:
    
        if (r6 >= r7) goto L142;
     */
    /* JADX WARN: Code restructure failed: missing block: B:165:0x0231, code lost:
    
        r3.f3328b = r5 + 5;
     */
    /* JADX WARN: Code restructure failed: missing block: B:167:0x023a, code lost:
    
        r3.f3329c = 2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:168:0x0237, code lost:
    
        r3.f3328b = r7;
     */
    /* JADX WARN: Code restructure failed: missing block: B:197:0x02de, code lost:
    
        r7 = false;
     */
    /* JADX WARN: Removed duplicated region for block: B:180:0x027e  */
    /* JADX WARN: Removed duplicated region for block: B:211:0x0305 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:216:0x0322  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0339  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x033e A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:40:0x033b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public yj.h p(int i5, String str) {
        boolean a;
        boolean z5;
        boolean z6;
        a5.h0 h0Var;
        boolean z7;
        boolean z8;
        yj.i iVar;
        int t5;
        int t10;
        int t11;
        char c6;
        yj.g gVar;
        int i6;
        int i10;
        int t12;
        int t13;
        char c8;
        yj.g gVar2;
        yj.g gVar3;
        nj.a aVar = (nj.a) this.f13142e;
        c5.e eVar = (c5.e) this.f13143i;
        StringBuilder sb2 = (StringBuilder) this.f13144v;
        sb2.setLength(0);
        if (str != null) {
            sb2.append(str);
        }
        eVar.f3328b = i5;
        do {
            int i11 = eVar.f3328b;
            int i12 = eVar.f3329c;
            if (i12 == 2) {
                while (true) {
                    int i13 = eVar.f3328b;
                    int i14 = i13 + 5;
                    i10 = aVar.f15509e;
                    if (i14 <= i10 && (((t12 = t(i13, 5, aVar)) >= 5 && t12 < 16) || (i13 + 6 <= i10 && (t13 = t(i13, 6, aVar)) >= 16 && t13 < 63))) {
                        int i15 = eVar.f3328b;
                        int t14 = t(i15, 5, aVar);
                        if (t14 == 15) {
                            gVar3 = new yj.g('$', i15 + 5);
                        } else {
                            if (t14 < 5 || t14 >= 15) {
                                int t15 = t(i15, 6, aVar);
                                if (t15 < 32 || t15 >= 58) {
                                    switch (t15) {
                                        case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                                            c8 = '*';
                                            break;
                                        case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                                            c8 = ',';
                                            break;
                                        case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                                            c8 = '-';
                                            break;
                                        case 61:
                                            c8 = '.';
                                            break;
                                        case 62:
                                            c8 = '/';
                                            break;
                                        default:
                                            throw new IllegalStateException("Decoding invalid alphanumeric value: ".concat(String.valueOf(t15)));
                                    }
                                    gVar2 = new yj.g(c8, i15 + 6);
                                } else {
                                    gVar2 = new yj.g((char) (t15 + 33), i15 + 6);
                                }
                            } else {
                                gVar2 = new yj.g((char) (t14 + 43), i15 + 5);
                            }
                            gVar3 = gVar2;
                        }
                        int i16 = gVar3.f14426e;
                        eVar.f3328b = i16;
                        char c10 = gVar3.f20943i;
                        if (c10 == '$') {
                            h0Var = new a5.h0(new yj.h(i16, sb2.toString()), true, 14);
                        } else {
                            sb2.append(c10);
                        }
                    }
                }
                int i17 = eVar.f3328b;
                int i18 = i17 + 3;
                if (i18 <= aVar.f15509e) {
                    while (i17 < i18) {
                        if (!aVar.a(i17)) {
                            i17++;
                        }
                    }
                    eVar.f3328b += 3;
                    eVar.f3329c = 1;
                    h0Var = new a5.h0(null, false, 14);
                    z8 = h0Var.f175e;
                }
                if (A(eVar.f3328b)) {
                    int i19 = eVar.f3328b;
                    if (i19 + 5 < i10) {
                        eVar.f3328b = i19 + 5;
                    } else {
                        eVar.f3328b = i10;
                    }
                    eVar.f3329c = 3;
                }
                h0Var = new a5.h0(null, false, 14);
                z8 = h0Var.f175e;
            } else if (i12 == 3) {
                while (true) {
                    int i20 = eVar.f3328b;
                    int i21 = i20 + 5;
                    int i22 = aVar.f15509e;
                    if (i21 <= i22 && (((t5 = t(i20, 5, aVar)) >= 5 && t5 < 16) || (i20 + 7 <= i22 && (((t10 = t(i20, 7, aVar)) >= 64 && t10 < 116) || (i20 + 8 <= i22 && (t11 = t(i20, 8, aVar)) >= 232 && t11 < 253))))) {
                        int i23 = eVar.f3328b;
                        int t16 = t(i23, 5, aVar);
                        if (t16 == 15) {
                            gVar = new yj.g('$', i23 + 5);
                        } else if (t16 < 5 || t16 >= 15) {
                            int t17 = t(i23, 7, aVar);
                            if (t17 >= 64 && t17 < 90) {
                                gVar = new yj.g((char) (t17 + 1), i23 + 7);
                            } else if (t17 < 90 || t17 >= 116) {
                                switch (t(i23, 8, aVar)) {
                                    case 232:
                                        c6 = '!';
                                        break;
                                    case 233:
                                        c6 = '\"';
                                        break;
                                    case 234:
                                        c6 = '%';
                                        break;
                                    case 235:
                                        c6 = '&';
                                        break;
                                    case 236:
                                        c6 = '\'';
                                        break;
                                    case 237:
                                        c6 = '(';
                                        break;
                                    case 238:
                                        c6 = ')';
                                        break;
                                    case 239:
                                        c6 = '*';
                                        break;
                                    case 240:
                                        c6 = '+';
                                        break;
                                    case 241:
                                        c6 = ',';
                                        break;
                                    case 242:
                                        c6 = '-';
                                        break;
                                    case 243:
                                        c6 = '.';
                                        break;
                                    case 244:
                                        c6 = '/';
                                        break;
                                    case 245:
                                        c6 = ':';
                                        break;
                                    case 246:
                                        c6 = ';';
                                        break;
                                    case 247:
                                        c6 = '<';
                                        break;
                                    case 248:
                                        c6 = '=';
                                        break;
                                    case 249:
                                        c6 = '>';
                                        break;
                                    case androidx.recyclerview.widget.h0.DEFAULT_SWIPE_ANIMATION_DURATION /* 250 */:
                                        c6 = '?';
                                        break;
                                    case 251:
                                        c6 = '_';
                                        break;
                                    case 252:
                                        c6 = ' ';
                                        break;
                                    default:
                                        throw jj.d.a();
                                }
                                gVar = new yj.g(c6, i23 + 8);
                            } else {
                                gVar = new yj.g((char) (t17 + 7), i23 + 7);
                            }
                        } else {
                            gVar = new yj.g((char) (t16 + 43), i23 + 5);
                        }
                        int i24 = gVar.f14426e;
                        eVar.f3328b = i24;
                        char c11 = gVar.f20943i;
                        if (c11 == '$') {
                            h0Var = new a5.h0(new yj.h(i24, sb2.toString()), true, 14);
                        } else {
                            sb2.append(c11);
                        }
                    }
                }
                z8 = h0Var.f175e;
            } else {
                while (true) {
                    int i25 = eVar.f3328b;
                    int i26 = i25 + 7;
                    int i27 = aVar.f15509e;
                    if (i26 > i27) {
                        if (i25 + 4 > i27) {
                            a = false;
                            if (a) {
                                int i28 = eVar.f3328b;
                                int i29 = i28 + 7;
                                if (i29 > i27) {
                                    int t18 = t(i28, 4, aVar);
                                    iVar = t18 == 0 ? new yj.i(i27, 10, 10) : new yj.i(i27, t18 - 1, 10);
                                } else {
                                    int t19 = t(i28, 7, aVar) - 8;
                                    iVar = new yj.i(i29, t19 / 11, t19 % 11);
                                }
                                int i30 = iVar.f14426e;
                                eVar.f3328b = i30;
                                int i31 = iVar.f20947i;
                                boolean z10 = i31 == 10;
                                int i32 = iVar.f20948v;
                                if (z10) {
                                    h0Var = new a5.h0(i32 == 10 ? new yj.h(i30, sb2.toString()) : new yj.h(i30, i32, sb2.toString()), true, 14);
                                    z5 = true;
                                } else {
                                    sb2.append(i31);
                                    if (i32 == 10) {
                                        z5 = true;
                                        h0Var = new a5.h0(new yj.h(eVar.f3328b, sb2.toString()), z5, 14);
                                    } else {
                                        sb2.append(i32);
                                    }
                                }
                            } else {
                                z5 = true;
                                int i33 = eVar.f3328b;
                                if (i33 + 1 <= i27) {
                                    for (int i34 = 0; i34 < 4; i34++) {
                                        int i35 = i34 + i33;
                                        if (i35 >= i27) {
                                            z6 = true;
                                            if (z6) {
                                                eVar.f3329c = 2;
                                                eVar.f3328b += 4;
                                            }
                                            z7 = false;
                                            h0Var = new a5.h0(null, z7, 14);
                                        } else if (!aVar.a(i35)) {
                                        }
                                    }
                                    z6 = true;
                                    if (z6) {
                                    }
                                    z7 = false;
                                    h0Var = new a5.h0(null, z7, 14);
                                }
                                z6 = false;
                                if (z6) {
                                }
                                z7 = false;
                                h0Var = new a5.h0(null, z7, 14);
                            }
                        }
                        a = true;
                        if (a) {
                        }
                    } else {
                        int i36 = i25;
                        while (true) {
                            int i37 = i25 + 3;
                            if (i36 >= i37) {
                                a = aVar.a(i37);
                            } else if (!aVar.a(i36)) {
                                i36++;
                            }
                        }
                        if (a) {
                        }
                    }
                    i6 = eVar.f3328b;
                    if (!(i11 != i6 ? z5 : z7) || z8) {
                    }
                    yj.h hVar = (yj.h) h0Var.f176i;
                    return (hVar == null && hVar.f20946w) ? new yj.h(i6, hVar.f20945v, sb2.toString()) : new yj.h(i6, sb2.toString());
                }
                z8 = h0Var.f175e;
                i6 = eVar.f3328b;
                if (!(i11 != i6 ? z5 : z7)) {
                }
            }
            z7 = false;
            z5 = true;
            i6 = eVar.f3328b;
            if (!(i11 != i6 ? z5 : z7)) {
            }
        } while (!z8);
        yj.h hVar2 = (yj.h) h0Var.f176i;
        if (hVar2 == null) {
        }
    }

    public void r(String str) {
        switch (this.f13141d) {
            case 17:
                u(0L, str);
                break;
            default:
                u(0L, str);
                break;
        }
    }

    public void s(Object obj, ByteArrayOutputStream byteArrayOutputStream) {
        HashMap hashMap = (HashMap) this.f13142e;
        ui.f fVar = new ui.f(byteArrayOutputStream, hashMap, (HashMap) this.f13143i, (ri.d) this.f13144v);
        ri.d dVar = (ri.d) hashMap.get(obj.getClass());
        if (dVar != null) {
            dVar.a(obj, fVar);
        } else {
            throw new ri.b("No encoder for " + obj.getClass());
        }
    }

    public String toString() {
        switch (this.f13141d) {
            case 9:
                StringBuilder sb2 = new StringBuilder(32);
                sb2.append((String) this.f13142e);
                sb2.append('{');
                r rVar = (r) ((r) this.f13143i).f13144v;
                String str = "";
                while (rVar != null) {
                    Object obj = rVar.f13143i;
                    sb2.append(str);
                    String str2 = (String) rVar.f13142e;
                    if (str2 != null) {
                        sb2.append(str2);
                        sb2.append('=');
                    }
                    if (obj == null || !obj.getClass().isArray()) {
                        sb2.append(obj);
                    } else {
                        String deepToString = Arrays.deepToString(new Object[]{obj});
                        sb2.append((CharSequence) deepToString, 1, deepToString.length() - 1);
                    }
                    rVar = (r) rVar.f13144v;
                    str = ", ";
                }
                sb2.append('}');
                return sb2.toString();
            default:
                return super.toString();
        }
    }

    public void u(long j, String str) {
        switch (this.f13141d) {
            case 17:
                Bundle bundle = (Bundle) this.f13143i;
                String str2 = (String) this.f13142e;
                kt.g gVar = (kt.g) this.f13144v;
                gVar.a.put(str2.concat(str), Long.valueOf(bundle.getLong(str, j)));
                break;
            default:
                String str3 = (String) this.f13142e;
                v3.f fVar = (v3.f) this.f13143i;
                Object obj = fVar.a.get(str3.concat(str));
                if (obj instanceof Long) {
                    j = ((Long) obj).longValue();
                }
                ((Bundle) this.f13144v).putLong(str, j);
                break;
        }
    }

    public void v(String str) {
        switch (this.f13141d) {
            case 17:
                String string = ((Bundle) this.f13143i).getString(str);
                if (string != null) {
                    ((kt.g) this.f13144v).a.put(((String) this.f13142e).concat(str), string);
                    break;
                }
                break;
            default:
                String str2 = (String) this.f13142e;
                Object obj = ((v3.f) this.f13143i).a.get(str2.concat(str));
                ((Bundle) this.f13144v).putString(str, obj instanceof String ? (String) obj : null);
                break;
        }
    }

    public File w(Context context, String str) {
        ((lh.f) this.f13143i).getClass();
        return new File(context.getDir("lib", 0), lh.f.j(str));
    }

    public boolean x(CharSequence charSequence, int i5, int i6, x xVar) {
        if ((xVar.f13160c & 3) == 0) {
            g gVar = (g) this.f13144v;
            l2.a b10 = xVar.b();
            int a = b10.a(8);
            if (a != 0) {
                ((ByteBuffer) b10.f1594v).getShort(a + b10.f1591d);
            }
            d dVar = (d) gVar;
            dVar.getClass();
            ThreadLocal threadLocal = d.f13121b;
            if (threadLocal.get() == null) {
                threadLocal.set(new StringBuilder());
            }
            StringBuilder sb2 = (StringBuilder) threadLocal.get();
            sb2.setLength(0);
            while (i5 < i6) {
                sb2.append(charSequence.charAt(i5));
                i5++;
            }
            TextPaint textPaint = dVar.a;
            String sb3 = sb2.toString();
            int i10 = b1.d.a;
            boolean hasGlyph = textPaint.hasGlyph(sb3);
            int i11 = xVar.f13160c & 4;
            xVar.f13160c = hasGlyph ? i11 | 2 : i11 | 1;
        }
        return (xVar.f13160c & 3) == 2;
    }

    public boolean y() {
        String trim;
        ArrayDeque arrayDeque = (ArrayDeque) this.f13143i;
        if (((String) this.f13144v) == null) {
            if (!arrayDeque.isEmpty()) {
                String str = (String) arrayDeque.poll();
                str.getClass();
                this.f13144v = str;
                return true;
            }
            do {
                String readLine = ((BufferedReader) this.f13142e).readLine();
                this.f13144v = readLine;
                if (readLine == null) {
                    return false;
                }
                trim = readLine.trim();
                this.f13144v = trim;
            } while (trim.isEmpty());
        }
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:66:0x0098, code lost:
    
        if (r1.f16773v != r11) goto L49;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x009b, code lost:
    
        r12 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x00c2, code lost:
    
        if (r1.f16773v != r11) goto L49;
     */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0041 A[Catch: all -> 0x0045, TryCatch #0 {all -> 0x0045, blocks: (B:8:0x0016, B:10:0x002b, B:13:0x0032, B:14:0x003a, B:16:0x0041, B:17:0x0049, B:20:0x0051, B:23:0x0057, B:26:0x005d, B:28:0x0060, B:32:0x0063), top: B:7:0x0016 }] */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0057 A[Catch: all -> 0x0045, TryCatch #0 {all -> 0x0045, blocks: (B:8:0x0016, B:10:0x002b, B:13:0x0032, B:14:0x003a, B:16:0x0041, B:17:0x0049, B:20:0x0051, B:23:0x0057, B:26:0x005d, B:28:0x0060, B:32:0x0063), top: B:7:0x0016 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void z(DataSource dataSource, Uri uri, Map map, long j, long j5, nd.h0 h0Var) {
        String str;
        int z5;
        int A;
        int i5;
        qc.j[] jVarArr;
        qc.g gVar = new qc.g(dataSource, j, j5);
        this.f13144v = gVar;
        if (((qc.j) this.f13143i) != null) {
            return;
        }
        qc.h hVar = (qc.h) this.f13142e;
        synchronized (hVar) {
            try {
                int[] iArr = qc.h.f16777b;
                ArrayList arrayList = new ArrayList(16);
                List list = (List) map.get("Content-Type");
                if (list != null && !list.isEmpty()) {
                    str = (String) list.get(0);
                    z5 = ke.b.z(str);
                    if (z5 != -1) {
                        hVar.a(z5, arrayList);
                    }
                    A = ke.b.A(uri);
                    if (A != -1 && A != z5) {
                        hVar.a(A, arrayList);
                    }
                    for (i5 = 0; i5 < 16; i5++) {
                        int i6 = iArr[i5];
                        if (i6 != z5 && i6 != A) {
                            hVar.a(i6, arrayList);
                        }
                    }
                    jVarArr = (qc.j[]) arrayList.toArray(new qc.j[arrayList.size()]);
                }
                str = null;
                z5 = ke.b.z(str);
                if (z5 != -1) {
                }
                A = ke.b.A(uri);
                if (A != -1) {
                    hVar.a(A, arrayList);
                }
                while (i5 < 16) {
                }
                jVarArr = (qc.j[]) arrayList.toArray(new qc.j[arrayList.size()]);
            } catch (Throwable th2) {
                throw th2;
            }
        }
        boolean z6 = true;
        if (jVarArr.length == 1) {
            this.f13143i = jVarArr[0];
        } else {
            int length = jVarArr.length;
            int i10 = 0;
            while (true) {
                if (i10 >= length) {
                    break;
                }
                qc.j jVar = jVarArr[i10];
                try {
                } catch (EOFException unused) {
                    if (((qc.j) this.f13143i) == null) {
                    }
                } catch (Throwable th3) {
                    if (((qc.j) this.f13143i) == null && gVar.f16773v != j) {
                        z6 = false;
                    }
                    ke.b.k(z6);
                    gVar.f16775x = 0;
                    throw th3;
                }
                if (jVar.f(gVar)) {
                    this.f13143i = jVar;
                    gVar.f16775x = 0;
                    break;
                } else {
                    if (((qc.j) this.f13143i) == null) {
                    }
                    boolean z7 = true;
                    ke.b.k(z7);
                    gVar.f16775x = 0;
                    i10++;
                }
            }
            if (((qc.j) this.f13143i) == null) {
                StringBuilder sb2 = new StringBuilder("None of the available extractors (");
                int i11 = ke.d0.a;
                StringBuilder sb3 = new StringBuilder();
                for (int i12 = 0; i12 < jVarArr.length; i12++) {
                    sb3.append(jVarArr[i12].getClass().getSimpleName());
                    if (i12 < jVarArr.length - 1) {
                        sb3.append(", ");
                    }
                }
                sb2.append(sb3.toString());
                sb2.append(") could read the stream.");
                throw new nd.b1(sb2.toString(), null, false, 1);
            }
        }
        ((qc.j) this.f13143i).a(h0Var);
    }

    public /* synthetic */ r(Object obj, Object obj2, Object obj3, int i5) {
        this.f13141d = i5;
        this.f13142e = obj;
        this.f13143i = obj2;
        this.f13144v = obj3;
    }

    public /* synthetic */ r(String str, v3.f fVar) {
        this.f13141d = 18;
        this.f13144v = new Bundle();
        this.f13142e = str;
        this.f13143i = fVar;
    }

    public r(wm.m dialog, hc.b dimmingManager, h8.a onNativeDismiss) {
        this.f13141d = 24;
        Intrinsics.checkNotNullParameter(dialog, "dialog");
        Intrinsics.checkNotNullParameter(dimmingManager, "dimmingManager");
        Intrinsics.checkNotNullParameter(onNativeDismiss, "onNativeDismiss");
        this.f13142e = dialog;
        this.f13143i = dimmingManager;
        this.f13144v = onNativeDismiss;
    }

    public r(List list) {
        this.f13141d = 7;
        this.f13144v = list;
        this.f13142e = new ArrayList(list.size());
        this.f13143i = new ArrayList(list.size());
        for (int i5 = 0; i5 < list.size(); i5++) {
            ((ArrayList) this.f13142e).add(new o4.n((List) ((s4.f) list.get(i5)).f17771b.f3143e));
            ((ArrayList) this.f13143i).add(((s4.f) list.get(i5)).f17772c.l0());
        }
    }

    public r(aq.f resolver, ha.l kotlinClassFinder) {
        this.f13141d = 6;
        Intrinsics.checkNotNullParameter(resolver, "resolver");
        Intrinsics.checkNotNullParameter(kotlinClassFinder, "kotlinClassFinder");
        this.f13142e = resolver;
        this.f13143i = kotlinClassFinder;
        this.f13144v = new ConcurrentHashMap();
    }

    @Override // m1.f
    public void b() {
    }

    public r(e4.p pVar, gk.n nVar) {
        this.f13141d = 2;
        this.f13142e = pVar;
        lk.b bVar = new lk.b(pVar, nVar);
        this.f13143i = bVar;
        ad.d0 d0Var = new ad.d0(bVar, pVar, this, nVar);
        this.f13144v = d0Var;
        u4.b bVar2 = new u4.b(26, d0Var);
        Iterator it = bVar.a().iterator();
        while (it.hasNext()) {
            jk.e eVar = ((nk.e) it.next()).f15538d;
            ha.l lVar = new ha.l();
            lVar.f9613d = bVar2;
            eVar.setOnValueChangedListener(lVar);
        }
    }

    public r(nj.b bVar) {
        int i5;
        int i6;
        this.f13141d = 14;
        int i10 = bVar.f15511e;
        if (i10 >= 8 && i10 <= 144 && (i5 = i10 & 1) == 0) {
            int i11 = bVar.f15510d;
            rj.c[] cVarArr = rj.c.f17394h;
            if (i5 == 0 && (i11 & 1) == 0) {
                rj.c[] cVarArr2 = rj.c.f17394h;
                for (int i12 = 0; i12 < 30; i12++) {
                    rj.c cVar = cVarArr2[i12];
                    int i13 = cVar.f17395b;
                    if (i13 == i10 && (i6 = cVar.f17396c) == i11) {
                        this.f13144v = cVar;
                        if (i10 == i13) {
                            int i14 = cVar.f17397d;
                            int i15 = cVar.f17398e;
                            int i16 = i13 / i14;
                            int i17 = i6 / i15;
                            nj.b bVar2 = new nj.b(i17 * i15, i16 * i14);
                            for (int i18 = 0; i18 < i16; i18++) {
                                int i19 = i18 * i14;
                                for (int i20 = 0; i20 < i17; i20++) {
                                    int i21 = i20 * i15;
                                    for (int i22 = 0; i22 < i14; i22++) {
                                        int i23 = ((i14 + 2) * i18) + 1 + i22;
                                        int i24 = i19 + i22;
                                        for (int i25 = 0; i25 < i15; i25++) {
                                            if (bVar.b(((i15 + 2) * i20) + 1 + i25, i23)) {
                                                bVar2.f(i21 + i25, i24);
                                            }
                                        }
                                    }
                                }
                            }
                            this.f13142e = bVar2;
                            this.f13143i = new nj.b(bVar2.f15510d, bVar2.f15511e);
                            return;
                        }
                        throw new IllegalArgumentException("Dimension of bitMatrix must match the version size");
                    }
                }
                throw jj.d.a();
            }
            throw jj.d.a();
        }
        throw jj.d.a();
    }

    public r(Class workerClass) {
        this.f13141d = 21;
        Intrinsics.checkNotNullParameter(workerClass, "workerClass");
        Intrinsics.checkNotNullParameter(workerClass, "workerClass");
        UUID randomUUID = UUID.randomUUID();
        Intrinsics.checkNotNullExpressionValue(randomUUID, "randomUUID()");
        this.f13142e = randomUUID;
        String id2 = ((UUID) this.f13142e).toString();
        Intrinsics.checkNotNullExpressionValue(id2, "id.toString()");
        String workerClassName_ = workerClass.getName();
        Intrinsics.checkNotNullExpressionValue(workerClassName_, "workerClass.name");
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(workerClassName_, "workerClassName_");
        this.f13143i = new e4.o(id2, (v3.y) null, workerClassName_, (String) null, (v3.f) null, (v3.f) null, 0L, 0L, 0L, (v3.e) null, 0, (v3.a) null, 0L, 0L, 0L, 0L, false, (v3.x) null, 0, 0L, 0, 0, 8388602);
        String name = workerClass.getName();
        Intrinsics.checkNotNullExpressionValue(name, "workerClass.name");
        String[] elements = {name};
        Intrinsics.checkNotNullParameter(elements, "elements");
        LinkedHashSet linkedHashSet = new LinkedHashSet(u0.a(1));
        kotlin.collections.x.F(elements, linkedHashSet);
        this.f13144v = linkedHashSet;
    }

    public r(int i5) {
        this.f13141d = i5;
        switch (i5) {
            case 13:
                this.f13142e = new SparseArray();
                break;
            case 26:
                this.f13142e = new AtomicReference(x.c.a);
                this.f13143i = new Object();
                break;
            default:
                lh.f fVar = new lh.f(15);
                l8.a aVar = new l8.a(15);
                this.f13142e = new HashSet();
                this.f13143i = fVar;
                this.f13144v = aVar;
                break;
        }
    }

    public r(nj.a aVar) {
        this.f13141d = 29;
        c5.e eVar = new c5.e(9);
        eVar.f3328b = 0;
        eVar.f3329c = 1;
        this.f13143i = eVar;
        this.f13144v = new StringBuilder();
        this.f13142e = aVar;
    }

    public r(e4.i c6, up.e typeParameterResolver) {
        this.f13141d = 25;
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(typeParameterResolver, "typeParameterResolver");
        this.f13142e = c6;
        this.f13143i = typeParameterResolver;
        this.f13144v = new io.sentry.internal.debugmeta.c(new wp.e());
    }

    public r(qc.h hVar) {
        this.f13141d = 5;
        this.f13142e = hVar;
    }

    public r(ConstraintWidgetContainer constraintWidgetContainer) {
        this.f13141d = 15;
        this.f13142e = new ArrayList();
        this.f13143i = new s0.b();
        this.f13144v = constraintWidgetContainer;
    }

    public r(e4.i iVar, l8.a aVar, d dVar, Set set) {
        this.f13141d = 0;
        this.f13142e = aVar;
        this.f13143i = iVar;
        this.f13144v = dVar;
        if (set.isEmpty()) {
            return;
        }
        Iterator it = set.iterator();
        while (it.hasNext()) {
            int[] iArr = (int[]) it.next();
            String str = new String(iArr, 0, iArr.length);
            F(str, 0, str.length(), 1, true, new a5.n(str, 3));
        }
    }

    public r(List allDependencies, o0 modulesWhoseInternalsAreVisible, m0 directExpectedByDependencies, o0 allExpectedByDependencies) {
        this.f13141d = 3;
        Intrinsics.checkNotNullParameter(allDependencies, "allDependencies");
        Intrinsics.checkNotNullParameter(modulesWhoseInternalsAreVisible, "modulesWhoseInternalsAreVisible");
        Intrinsics.checkNotNullParameter(directExpectedByDependencies, "directExpectedByDependencies");
        Intrinsics.checkNotNullParameter(allExpectedByDependencies, "allExpectedByDependencies");
        this.f13142e = allDependencies;
        this.f13143i = modulesWhoseInternalsAreVisible;
        this.f13144v = directExpectedByDependencies;
    }

    public r(String str) {
        this.f13141d = 9;
        r rVar = new r(8, false);
        this.f13143i = rVar;
        this.f13144v = rVar;
        this.f13142e = str;
    }

    public r(k8.b bVar, String str, File file) {
        this.f13141d = 1;
        this.f13144v = bVar;
        this.f13142e = str;
        this.f13143i = file;
    }

    public r(ArrayDeque arrayDeque, BufferedReader bufferedReader) {
        this.f13141d = 16;
        this.f13143i = arrayDeque;
        this.f13142e = bufferedReader;
    }
}
