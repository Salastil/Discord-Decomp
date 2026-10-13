package ys;

import a5.k0;
import android.app.Activity;
import android.content.Context;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.Base64;
import android.view.ViewParent;
import android.view.Window;
import androidx.appcompat.widget.n2;
import androidx.core.view.WindowInsetsControllerCompat;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenContainer;
import com.swmansion.rnscreens.ScreenFragmentWrapper;
import ip.f0;
import ip.m0;
import ip.v;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.logging.Level;
import java.util.logging.Logger;
import ke.w;
import kotlin.collections.d0;
import kotlin.collections.u0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.l0;
import org.json.JSONException;
import org.json.JSONObject;
import rp.h0;
import yq.b1;
import yq.c0;
import yq.c1;
import yq.p0;
import yq.q0;
import yq.s0;
import yq.y;
import yq.z0;
import zq.o;

/* loaded from: classes3.dex */
public abstract class d {
    public static boolean a;

    /* renamed from: b, reason: collision with root package name */
    public static boolean f21097b;

    /* renamed from: c, reason: collision with root package name */
    public static boolean f21098c;

    public static Parcelable A(Parcel parcel, int i5, Parcelable.Creator creator) {
        int Y = Y(i5, parcel);
        int dataPosition = parcel.dataPosition();
        if (Y == 0) {
            return null;
        }
        Parcelable parcelable = (Parcelable) creator.createFromParcel(parcel);
        parcel.setDataPosition(dataPosition + Y);
        return parcelable;
    }

    public static String B(int i5, Parcel parcel) {
        int Y = Y(i5, parcel);
        int dataPosition = parcel.dataPosition();
        if (Y == 0) {
            return null;
        }
        String readString = parcel.readString();
        parcel.setDataPosition(dataPosition + Y);
        return readString;
    }

    public static ArrayList C(int i5, Parcel parcel) {
        int Y = Y(i5, parcel);
        int dataPosition = parcel.dataPosition();
        if (Y == 0) {
            return null;
        }
        ArrayList<String> createStringArrayList = parcel.createStringArrayList();
        parcel.setDataPosition(dataPosition + Y);
        return createStringArrayList;
    }

    public static Object[] D(Parcel parcel, int i5, Parcelable.Creator creator) {
        int Y = Y(i5, parcel);
        int dataPosition = parcel.dataPosition();
        if (Y == 0) {
            return null;
        }
        Object[] createTypedArray = parcel.createTypedArray(creator);
        parcel.setDataPosition(dataPosition + Y);
        return createTypedArray;
    }

    public static ArrayList E(Parcel parcel, int i5, Parcelable.Creator creator) {
        int Y = Y(i5, parcel);
        int dataPosition = parcel.dataPosition();
        if (Y == 0) {
            return null;
        }
        ArrayList createTypedArrayList = parcel.createTypedArrayList(creator);
        parcel.setDataPosition(dataPosition + Y);
        return createTypedArrayList;
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x00d2  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0112  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x011f  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0115  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00e8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final int F(RotationOptions rotationOptions, ResizeOptions resizeOptions, EncodedImage encodedImage, int i5) {
        float f2;
        int max;
        float f10;
        int rotationAngle;
        Intrinsics.checkNotNullParameter(rotationOptions, "rotationOptions");
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        int i6 = 1;
        if (!EncodedImage.isMetaDataAvailable(encodedImage)) {
            return 1;
        }
        Intrinsics.checkNotNullParameter(rotationOptions, "rotationOptions");
        Intrinsics.checkNotNullParameter(encodedImage, "encodedImage");
        if (!EncodedImage.isMetaDataAvailable(encodedImage)) {
            throw new IllegalStateException("Check failed.");
        }
        int i10 = 2;
        if (resizeOptions != null) {
            int i11 = resizeOptions.a;
            int i12 = resizeOptions.f4584b;
            if (i12 > 0 && i11 > 0 && encodedImage.getWidth() != 0 && encodedImage.getHeight() != 0) {
                if (rotationOptions.a()) {
                    rotationAngle = encodedImage.getRotationAngle();
                    if (rotationAngle != 0 && rotationAngle != 90 && rotationAngle != 180 && rotationAngle != 270) {
                        throw new IllegalStateException("Check failed.");
                    }
                } else {
                    rotationAngle = 0;
                }
                boolean z5 = rotationAngle == 90 || rotationAngle == 270;
                int height = z5 ? encodedImage.getHeight() : encodedImage.getWidth();
                int width = z5 ? encodedImage.getWidth() : encodedImage.getHeight();
                float f11 = i11 / height;
                float f12 = i12 / width;
                f2 = f11 < f12 ? f12 : f11;
                Object[] objArr = {Integer.valueOf(i11), Integer.valueOf(i12), Integer.valueOf(height), Integer.valueOf(width), Float.valueOf(f11), Float.valueOf(f12), Float.valueOf(f2)};
                if (p8.a.a.isLoggable(2)) {
                    p8.a.a.v("DownsampleUtil", String.format(null, "Downsample - Specified size: %dx%d, image size: %dx%d ratio: %.1f x %.1f, ratio: %.3f", objArr));
                }
                double d6 = 1.0d;
                if (encodedImage.getImageFormat() != aa.b.a) {
                    if (f2 <= 0.6666667f) {
                        i6 = 2;
                        while (true) {
                            int i13 = i6 * 2;
                            double d7 = 1.0d / i13;
                            if ((0.33333334f * d7) + d7 <= f2) {
                                break;
                            }
                            i6 = i13;
                        }
                    }
                } else if (f2 <= 0.6666667f) {
                    while (true) {
                        double d8 = i10;
                        int i14 = i6;
                        if (((d6 / (Math.pow(d8, 2.0d) - d8)) * 0.33333334f) + (d6 / d8) <= f2) {
                            break;
                        }
                        i10++;
                        i6 = i14;
                        d6 = 1.0d;
                    }
                    i6 = i10 - 1;
                }
                max = Math.max(encodedImage.getHeight(), encodedImage.getWidth());
                f10 = resizeOptions == null ? 2048.0f : i5;
                while (max / i6 > f10) {
                    i6 = encodedImage.getImageFormat() == aa.b.a ? i6 * 2 : i6 + 1;
                }
                return i6;
            }
        }
        f2 = 1.0f;
        double d62 = 1.0d;
        if (encodedImage.getImageFormat() != aa.b.a) {
        }
        max = Math.max(encodedImage.getHeight(), encodedImage.getWidth());
        if (resizeOptions == null) {
        }
        while (max / i6 > f10) {
        }
        return i6;
    }

    public static void G(int i5, Parcel parcel) {
        if (parcel.dataPosition() == i5) {
            return;
        }
        StringBuilder sb2 = new StringBuilder(String.valueOf(i5).length() + 26);
        sb2.append("Overread allowed size end=");
        sb2.append(i5);
        throw new ai.k(sb2.toString(), parcel);
    }

    public static Screen H(Screen screen, com.swmansion.rnscreens.n nVar) {
        Screen w5 = w(screen, nVar);
        if (w5 != null) {
            return w5;
        }
        if (v(screen, nVar)) {
            return screen;
        }
        for (ViewParent container = screen.getContainer(); container != null; container = container.getParent()) {
            if (container instanceof Screen) {
                Screen screen2 = (Screen) container;
                if (v(screen2, nVar)) {
                    return screen2;
                }
            }
        }
        return null;
    }

    public static byte[] I(JSONObject jSONObject) {
        LinkedHashMap linkedHashMap = v1.i.a;
        String str = jSONObject.optString("challenge", "");
        Intrinsics.checkNotNull(str);
        if (str.length() == 0) {
            throw new JSONException("Challenge not found in request or is unexpectedly empty");
        }
        Intrinsics.checkNotNullParameter(str, "str");
        byte[] decode = Base64.decode(str, 11);
        Intrinsics.checkNotNullExpressionValue(decode, "decode(...)");
        return decode;
    }

    public static Drawable J(Context context, int i5) {
        return n2.b().c(context, i5);
    }

    public static Set K() {
        try {
            Object invoke = Class.forName("android.text.EmojiConsistency").getMethod("getEmojiConsistencySet", null).invoke(null, null);
            if (invoke == null) {
                return Collections.EMPTY_SET;
            }
            Set set = (Set) invoke;
            Iterator it = set.iterator();
            while (it.hasNext()) {
                if (!(it.next() instanceof int[])) {
                    return Collections.EMPTY_SET;
                }
            }
            return set;
        } catch (Throwable unused) {
            return Collections.EMPTY_SET;
        }
    }

    /* JADX WARN: Type inference failed for: r0v9, types: [java.lang.Object, java.util.Map] */
    public static final String L(v callableMemberDescriptor) {
        ip.d k;
        hq.e eVar;
        Intrinsics.checkNotNullParameter(callableMemberDescriptor, "callableMemberDescriptor");
        ip.d M = fp.i.A(callableMemberDescriptor) ? M(callableMemberDescriptor) : null;
        if (M != null && (k = oq.e.k(M)) != null) {
            if (k instanceof m0) {
                Intrinsics.checkNotNullParameter(k, "<this>");
                fp.i.A(k);
                ip.d b10 = oq.e.b(oq.e.k(k), rp.d.f17438v);
                if (b10 != null && (eVar = (hq.e) rp.f.a.get(oq.e.g(b10))) != null) {
                    return eVar.b();
                }
            } else if (k instanceof l0) {
                int i5 = rp.c.f17430l;
                l0 functionDescriptor = (l0) k;
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                LinkedHashMap linkedHashMap = h0.f17468i;
                String h6 = ks.n.h(functionDescriptor);
                hq.e eVar2 = h6 == null ? null : (hq.e) linkedHashMap.get(h6);
                if (eVar2 != null) {
                    return eVar2.b();
                }
            }
        }
        return null;
    }

    public static final ip.d M(ip.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        if (!h0.j.contains(dVar.getName()) && !rp.f.f17454d.contains(oq.e.k(dVar).getName())) {
            return null;
        }
        if ((dVar instanceof m0) || (dVar instanceof ip.l0)) {
            return oq.e.b(dVar, rp.d.f17440x);
        }
        if (dVar instanceof l0) {
            return oq.e.b(dVar, rp.d.f17441y);
        }
        return null;
    }

    public static final ip.d N(ip.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        ip.d M = M(dVar);
        if (M != null) {
            return M;
        }
        int i5 = rp.e.f17447l;
        hq.e name = dVar.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        if (rp.e.b(name)) {
            return oq.e.b(dVar, rp.d.E);
        }
        return null;
    }

    public static final Object O(xq.m mVar, KProperty p3) {
        Intrinsics.checkNotNullParameter(mVar, "<this>");
        Intrinsics.checkNotNullParameter(p3, "p");
        return mVar.invoke();
    }

    /* JADX WARN: Code restructure failed: missing block: B:54:0x016b, code lost:
    
        if (r2 == null) goto L75;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x0172, code lost:
    
        return !fp.i.A(r14);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final boolean P(ip.f fVar, ip.d specialCallableDescriptor) {
        Intrinsics.checkNotNullParameter(fVar, "<this>");
        Intrinsics.checkNotNullParameter(specialCallableDescriptor, "specialCallableDescriptor");
        ip.l h6 = specialCallableDescriptor.h();
        Intrinsics.checkNotNull(h6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
        c0 supertype = ((ip.f) h6).k();
        Intrinsics.checkNotNullExpressionValue(supertype, "getDefaultType(...)");
        ip.f j = kq.e.j(fVar);
        while (j != null) {
            if (!(j instanceof tp.c)) {
                c0 subtype = j.k();
                b1 b1Var = null;
                if (subtype == null) {
                    k0.a(0);
                    throw null;
                }
                if (supertype == null) {
                    k0.a(1);
                    throw null;
                }
                zq.n typeCheckingProcedureCallbacks = new zq.n();
                Intrinsics.checkNotNullParameter(subtype, "subtype");
                Intrinsics.checkNotNullParameter(supertype, "supertype");
                Intrinsics.checkNotNullParameter(typeCheckingProcedureCallbacks, "typeCheckingProcedureCallbacks");
                ArrayDeque arrayDeque = new ArrayDeque();
                arrayDeque.add(new o(subtype, null));
                p0 r02 = supertype.r0();
                while (true) {
                    if (arrayDeque.isEmpty()) {
                        break;
                    }
                    o oVar = (o) arrayDeque.poll();
                    y yVar = oVar.a;
                    p0 r03 = yVar.r0();
                    if (r03 == null) {
                        zq.n.a(3);
                        throw null;
                    }
                    if (r02 == null) {
                        zq.n.a(4);
                        throw null;
                    }
                    if (r03.equals(r02)) {
                        boolean t02 = yVar.t0();
                        for (o oVar2 = oVar.f21399b; oVar2 != null; oVar2 = oVar2.f21399b) {
                            y kotlinType = oVar2.a;
                            List l02 = kotlinType.l0();
                            yq.f fVar2 = q0.f21064b;
                            if (l02 == null || !l02.isEmpty()) {
                                Iterator it = l02.iterator();
                                while (it.hasNext()) {
                                    c1 a10 = ((s0) it.next()).a();
                                    c1 c1Var = c1.f21013i;
                                    if (a10 != c1Var) {
                                        Intrinsics.checkNotNullParameter(kotlinType, "kotlinType");
                                        y h7 = nt.a.L(fVar2.f(kotlinType.r0(), kotlinType.l0())).c().h(yVar, c1Var);
                                        Intrinsics.checkNotNullExpressionValue(h7, "safeSubstitute(...)");
                                        yVar = (y) k0.g(h7).f8220b;
                                        break;
                                    }
                                }
                            }
                            Intrinsics.checkNotNullParameter(kotlinType, "kotlinType");
                            yVar = fVar2.f(kotlinType.r0(), kotlinType.l0()).c().h(yVar, c1.f21013i);
                            Intrinsics.checkNotNull(yVar);
                            t02 = t02 || kotlinType.t0();
                        }
                        p0 r04 = yVar.r0();
                        if (r04 == null) {
                            zq.n.a(3);
                            throw null;
                        }
                        if (!r04.equals(r02)) {
                            throw new AssertionError("Type constructors should be equals!\nsubstitutedSuperType: " + android.support.v4.media.session.b.h(r04) + ", \n\nsupertype: " + android.support.v4.media.session.b.h(r02) + " \n" + r04.equals(r02));
                        }
                        b1Var = z0.g(yVar, t02);
                    } else {
                        for (y yVar2 : r03.b()) {
                            Intrinsics.checkNotNull(yVar2);
                            arrayDeque.add(new o(yVar2, oVar));
                        }
                    }
                }
            }
            j = kq.e.j(j);
        }
        return false;
    }

    public static final boolean Q(float f2) {
        return Float.compare(f2, Float.NaN) == 0;
    }

    public static boolean T(int i5, Parcel parcel) {
        i0(parcel, i5, 4);
        return parcel.readInt() != 0;
    }

    public static int U(int i5, w wVar) {
        switch (i5) {
            case 1:
                return JfifUtil.MARKER_SOFn;
            case 2:
            case 3:
            case 4:
            case 5:
                return 576 << (i5 - 2);
            case 6:
                return wVar.u() + 1;
            case 7:
                return wVar.z() + 1;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                return IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER << (i5 - 8);
            default:
                return -1;
        }
    }

    public static int V(int i5, Parcel parcel) {
        i0(parcel, i5, 4);
        return parcel.readInt();
    }

    public static Integer W(int i5, Parcel parcel) {
        int Y = Y(i5, parcel);
        if (Y == 0) {
            return null;
        }
        k0(parcel, Y, 4);
        return Integer.valueOf(parcel.readInt());
    }

    public static long X(int i5, Parcel parcel) {
        i0(parcel, i5, 8);
        return parcel.readLong();
    }

    public static int Y(int i5, Parcel parcel) {
        return (i5 & (-65536)) != -65536 ? (char) (i5 >> 16) : parcel.readInt();
    }

    public static final void Z(qp.b bVar, qp.a from, ip.f scopeOwner, hq.e name) {
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        Intrinsics.checkNotNullParameter(from, "from");
        Intrinsics.checkNotNullParameter(scopeOwner, "scopeOwner");
        Intrinsics.checkNotNullParameter(name, "name");
        if (bVar == qp.b.a) {
            return;
        }
        from.getClass();
    }

    public static final long a(int i5, int i6) {
        long j = (i6 & 4294967295L) | (i5 << 32);
        int i10 = m0.d.f14312b;
        return j;
    }

    public static final void a0(qp.b bVar, qp.a from, f0 scopeOwner, hq.e name) {
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        Intrinsics.checkNotNullParameter(from, "from");
        Intrinsics.checkNotNullParameter(scopeOwner, "scopeOwner");
        Intrinsics.checkNotNullParameter(name, "name");
        String packageFqName = ((lp.c0) scopeOwner).f14132x.a.a;
        String name2 = name.b();
        Intrinsics.checkNotNullExpressionValue(name2, "asString(...)");
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        Intrinsics.checkNotNullParameter(from, "from");
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(name2, "name");
        if (bVar == qp.b.a) {
            return;
        }
        from.getClass();
    }

    public static final long b(float f2, float f10) {
        long floatToIntBits = (Float.floatToIntBits(f10) & 4294967295L) | (Float.floatToIntBits(f2) << 32);
        int i5 = b0.b.a;
        return floatToIntBits;
    }

    public static void b0(Screen screen, Activity activity) {
        Boolean isStatusBarHidden;
        Intrinsics.checkNotNullParameter(screen, "screen");
        if (activity == null) {
            return;
        }
        Screen H = H(screen, com.swmansion.rnscreens.n.f6773i);
        boolean booleanValue = (H == null || (isStatusBarHidden = H.isStatusBarHidden()) == null) ? false : isStatusBarHidden.booleanValue();
        Window window = activity.getWindow();
        UiThreadUtil.runOnUiThread(new com.facebook.react.devsupport.e(booleanValue, new WindowInsetsControllerCompat(window, window.getDecorView()), 5));
    }

    public static String c(String str, Object... objArr) {
        int length;
        int indexOf;
        StringBuilder sb2 = new StringBuilder(str.length() + (objArr.length * 16));
        int i5 = 0;
        int i6 = 0;
        while (true) {
            length = objArr.length;
            if (i5 >= length || (indexOf = str.indexOf("%s", i6)) == -1) {
                break;
            }
            sb2.append((CharSequence) str, i6, indexOf);
            sb2.append(k(objArr[i5]));
            i6 = indexOf + 2;
            i5++;
        }
        sb2.append((CharSequence) str, i6, str.length());
        if (i5 < length) {
            String str2 = " [";
            while (i5 < objArr.length) {
                sb2.append(str2);
                sb2.append(k(objArr[i5]));
                i5++;
                str2 = ", ";
            }
            sb2.append(']');
        }
        return sb2.toString();
    }

    public static void c0(Screen screen, Activity activity) {
        Boolean isNavigationBarHidden;
        Intrinsics.checkNotNullParameter(screen, "screen");
        if (activity == null) {
            return;
        }
        Window window = activity.getWindow();
        Screen H = H(screen, com.swmansion.rnscreens.n.f6774v);
        if (!((H == null || (isNavigationBarHidden = H.isNavigationBarHidden()) == null) ? false : isNavigationBarHidden.booleanValue())) {
            new WindowInsetsControllerCompat(window, window.getDecorView()).e(2);
            return;
        }
        WindowInsetsControllerCompat windowInsetsControllerCompat = new WindowInsetsControllerCompat(window, window.getDecorView());
        windowInsetsControllerCompat.a(2);
        windowInsetsControllerCompat.d();
    }

    public static final hq.b d(String str) {
        hq.c cVar = hq.h.a;
        hq.c cVar2 = hq.h.a;
        hq.e e9 = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return new hq.b(cVar2, e9);
    }

    public static void d0(Screen screen, Activity activity, ReactContext reactContext) {
        String str;
        Intrinsics.checkNotNullParameter(screen, "screen");
        if (activity == null || reactContext == null) {
            return;
        }
        Screen H = H(screen, com.swmansion.rnscreens.n.f6772e);
        if (H == null || (str = H.getStatusBarStyle()) == null) {
            str = "light";
        }
        UiThreadUtil.runOnUiThread(new com.facebook.react.modules.statusbar.a(activity, str, 1));
    }

    public static final hq.b e(String str) {
        hq.c cVar = hq.h.a;
        hq.c cVar2 = hq.h.f10219c;
        hq.e e9 = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return new hq.b(cVar2, e9);
    }

    public static void e0(int i5, Parcel parcel) {
        parcel.setDataPosition(parcel.dataPosition() + Y(i5, parcel));
    }

    public static final void f(LinkedHashMap linkedHashMap) {
        Set<Map.Entry> entrySet = linkedHashMap.entrySet();
        int a10 = u0.a(d0.l(entrySet, 10));
        if (a10 < 16) {
            a10 = 16;
        }
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(a10);
        for (Map.Entry entry : entrySet) {
            linkedHashMap2.put(entry.getValue(), entry.getKey());
        }
    }

    public static void f0(Screen screen, Activity activity, ReactContext reactContext) {
        Integer screenOrientation;
        Intrinsics.checkNotNullParameter(screen, "screen");
        if (a) {
            Intrinsics.checkNotNullParameter(screen, "screen");
            if (activity != null) {
                Screen H = H(screen, com.swmansion.rnscreens.n.f6771d);
                activity.setRequestedOrientation((H == null || (screenOrientation = H.getScreenOrientation()) == null) ? -1 : screenOrientation.intValue());
            }
        }
        if (f21097b) {
            d0(screen, activity, reactContext);
            b0(screen, activity);
        }
        if (f21098c) {
            c0(screen, activity);
        }
    }

    public static final hq.b g(hq.e eVar) {
        hq.c cVar = hq.h.a;
        hq.b bVar = hq.h.k;
        hq.c cVar2 = bVar.a;
        hq.e e9 = hq.e.e(eVar.c().concat(bVar.f().c()));
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return new hq.b(cVar2, e9);
    }

    public static int g0(Parcel parcel) {
        int readInt = parcel.readInt();
        int Y = Y(readInt, parcel);
        char c6 = (char) readInt;
        int dataPosition = parcel.dataPosition();
        if (c6 != 20293) {
            throw new ai.k("Expected object header. Got 0x".concat(String.valueOf(Integer.toHexString(readInt))), parcel);
        }
        int i5 = Y + dataPosition;
        if (i5 >= dataPosition && i5 <= parcel.dataSize()) {
            return i5;
        }
        StringBuilder sb2 = new StringBuilder(String.valueOf(dataPosition).length() + 32 + String.valueOf(i5).length());
        sb2.append("Size read is invalid start=");
        sb2.append(dataPosition);
        sb2.append(" end=");
        sb2.append(i5);
        throw new ai.k(sb2.toString(), parcel);
    }

    public static final void h(String str) {
        hq.c cVar = hq.h.a;
        hq.c packageFqName = hq.h.f10220d;
        hq.e topLevelName = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(topLevelName, "identifier(...)");
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(topLevelName, "topLevelName");
        hq.c cVar2 = hq.c.f10203c;
        hq.c relativeClassName = tn.g.C(topLevelName);
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(relativeClassName, "relativeClassName");
        relativeClassName.a.c();
    }

    public static String h0(String str, Object... objArr) {
        int length;
        int indexOf;
        StringBuilder sb2 = new StringBuilder(str.length() + (objArr.length * 16));
        int i5 = 0;
        int i6 = 0;
        while (true) {
            length = objArr.length;
            if (i5 >= length || (indexOf = str.indexOf("%s", i6)) == -1) {
                break;
            }
            sb2.append((CharSequence) str, i6, indexOf);
            sb2.append(j0(objArr[i5]));
            i6 = indexOf + 2;
            i5++;
        }
        sb2.append((CharSequence) str, i6, str.length());
        if (i5 < length) {
            String str2 = " [";
            while (i5 < objArr.length) {
                sb2.append(str2);
                sb2.append(j0(objArr[i5]));
                i5++;
                str2 = ", ";
            }
            sb2.append(']');
        }
        return sb2.toString();
    }

    public static final hq.b i(String str) {
        hq.c cVar = hq.h.a;
        hq.c cVar2 = hq.h.f10218b;
        hq.e e9 = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return new hq.b(cVar2, e9);
    }

    public static void i0(Parcel parcel, int i5, int i6) {
        int Y = Y(i5, parcel);
        if (Y == i6) {
            return;
        }
        String hexString = Integer.toHexString(Y);
        int length = String.valueOf(i6).length();
        StringBuilder sb2 = new StringBuilder(String.valueOf(hexString).length() + length + 19 + String.valueOf(Y).length() + 4 + 1);
        sb2.append("Expected size ");
        sb2.append(i6);
        sb2.append(" got ");
        sb2.append(Y);
        throw new ai.k(a3.e.n(sb2, " (0x", hexString, ")"), parcel);
    }

    public static final hq.b j(hq.b bVar) {
        hq.c cVar = hq.h.a;
        hq.c cVar2 = hq.h.a;
        hq.e e9 = hq.e.e("U".concat(bVar.f().c()));
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        return new hq.b(cVar2, e9);
    }

    public static String j0(Object obj) {
        if (obj == null) {
            return "null";
        }
        try {
            return obj.toString();
        } catch (Exception e9) {
            String name = obj.getClass().getName();
            String hexString = Integer.toHexString(System.identityHashCode(obj));
            String n6 = a3.e.n(new StringBuilder(name.length() + 1 + String.valueOf(hexString).length()), name, "@", hexString);
            Logger.getLogger("com.google.common.base.Strings").logp(Level.WARNING, "com.google.common.base.Strings", "lenientToString", "Exception during lenientFormat for ".concat(n6), (Throwable) e9);
            String name2 = e9.getClass().getName();
            StringBuilder sb2 = new StringBuilder(n6.length() + 8 + name2.length() + 1);
            a3.e.A(sb2, "<", n6, " threw ", name2);
            sb2.append(">");
            return sb2.toString();
        }
    }

    public static String k(Object obj) {
        if (obj == null) {
            return "null";
        }
        try {
            return obj.toString();
        } catch (Exception e9) {
            String l6 = k0.d.l(obj.getClass().getName(), "@", Integer.toHexString(System.identityHashCode(obj)));
            Logger.getLogger("com.google.common.base.Strings").logp(Level.WARNING, "com.google.common.base.Strings", "lenientToString", "Exception during lenientFormat for ".concat(l6), (Throwable) e9);
            return s4.h.g("<", l6, " threw ", e9.getClass().getName(), ">");
        }
    }

    public static void k0(Parcel parcel, int i5, int i6) {
        if (i5 == i6) {
            return;
        }
        String hexString = Integer.toHexString(i5);
        int length = String.valueOf(i6).length();
        StringBuilder sb2 = new StringBuilder(String.valueOf(hexString).length() + length + 19 + String.valueOf(i5).length() + 4 + 1);
        sb2.append("Expected size ");
        sb2.append(i6);
        sb2.append(" got ");
        sb2.append(i5);
        throw new ai.k(a3.e.n(sb2, " (0x", hexString, ")"), parcel);
    }

    public static String l(int i5, int i6, String str) {
        if (i5 < 0) {
            return l.n("%s (%s) must not be negative", str, Integer.valueOf(i5));
        }
        if (i6 >= 0) {
            return l.n("%s (%s) must not be greater than size (%s)", str, Integer.valueOf(i5), Integer.valueOf(i6));
        }
        StringBuilder sb2 = new StringBuilder(26);
        sb2.append("negative size: ");
        sb2.append(i6);
        throw new IllegalArgumentException(sb2.toString());
    }

    public static boolean p(w wVar, qc.o oVar, int i5, qc.m mVar) {
        long v5 = wVar.v();
        long j = v5 >>> 16;
        if (j != i5) {
            return false;
        }
        boolean z5 = (j & 1) == 1;
        int i6 = (int) ((v5 >> 12) & 15);
        int i10 = (int) ((v5 >> 8) & 15);
        int i11 = (int) ((v5 >> 4) & 15);
        int i12 = (int) ((v5 >> 1) & 7);
        boolean z6 = (v5 & 1) == 1;
        if (i11 <= 7) {
            if (i11 != oVar.f16788g - 1) {
                return false;
            }
        } else if (i11 > 10 || oVar.f16788g != 2) {
            return false;
        }
        if (!(i12 == 0 || i12 == oVar.f16790i) || z6) {
            return false;
        }
        try {
            long A = wVar.A();
            if (!z5) {
                A *= oVar.f16783b;
            }
            mVar.a = A;
            int U = U(i6, wVar);
            if (U == -1 || U > oVar.f16783b) {
                return false;
            }
            int i13 = oVar.f16786e;
            if (i10 != 0) {
                if (i10 <= 11) {
                    if (i10 != oVar.f16787f) {
                        return false;
                    }
                } else if (i10 != 12) {
                    if (i10 > 14) {
                        return false;
                    }
                    int z7 = wVar.z();
                    if (i10 == 14) {
                        z7 *= 10;
                    }
                    if (z7 != i13) {
                        return false;
                    }
                } else if (wVar.u() * 1000 != i13) {
                    return false;
                }
            }
            int u5 = wVar.u();
            int i14 = wVar.f13363b;
            byte[] bArr = wVar.a;
            int i15 = i14 - 1;
            int i16 = 0;
            for (int i17 = wVar.f13363b; i17 < i15; i17++) {
                i16 = ke.d0.f13305o[i16 ^ (bArr[i17] & 255)];
            }
            int i18 = ke.d0.a;
            return u5 == i16;
        } catch (NumberFormatException unused) {
            return false;
        }
    }

    public static void q(boolean z5, String str, long j) {
        if (!z5) {
            throw new IllegalArgumentException(l.n(str, Long.valueOf(j)));
        }
    }

    public static void r(int i5, int i6) {
        String n6;
        if (i5 < 0 || i5 >= i6) {
            if (i5 < 0) {
                n6 = l.n("%s (%s) must not be negative", "index", Integer.valueOf(i5));
            } else {
                if (i6 < 0) {
                    StringBuilder sb2 = new StringBuilder(26);
                    sb2.append("negative size: ");
                    sb2.append(i6);
                    throw new IllegalArgumentException(sb2.toString());
                }
                n6 = l.n("%s (%s) must be less than size (%s)", "index", Integer.valueOf(i5), Integer.valueOf(i6));
            }
            throw new IndexOutOfBoundsException(n6);
        }
    }

    public static void s(Object obj, String str) {
        if (obj == null) {
            throw new NullPointerException(str);
        }
    }

    public static void t(int i5, int i6) {
        if (i5 < 0 || i5 > i6) {
            throw new IndexOutOfBoundsException(l(i5, i6, "index"));
        }
    }

    public static void u(int i5, int i6, int i10) {
        if (i5 < 0 || i6 < i5 || i6 > i10) {
            throw new IndexOutOfBoundsException((i5 < 0 || i5 > i10) ? l(i5, i10, "start index") : (i6 < 0 || i6 > i10) ? l(i6, i10, "end index") : l.n("end index (%s) must not be less than start index (%s)", Integer.valueOf(i6), Integer.valueOf(i5)));
        }
    }

    public static boolean v(Screen screen, com.swmansion.rnscreens.n nVar) {
        int ordinal = nVar.ordinal();
        if (ordinal != 0) {
            if (ordinal != 1) {
                if (ordinal != 2) {
                    if (ordinal != 3) {
                        if (ordinal != 4) {
                            throw new fo.n();
                        }
                        if (screen.isNavigationBarHidden() == null) {
                            return false;
                        }
                    } else if (screen.isStatusBarAnimated() == null) {
                        return false;
                    }
                } else if (screen.isStatusBarHidden() == null) {
                    return false;
                }
            } else if (screen.getStatusBarStyle() == null) {
                return false;
            }
        } else if (screen.getScreenOrientation() == null) {
            return false;
        }
        return true;
    }

    public static Screen w(Screen screen, com.swmansion.rnscreens.n nVar) {
        ScreenFragmentWrapper fragmentWrapper;
        if (screen == null || (fragmentWrapper = screen.getFragmentWrapper()) == null) {
            return null;
        }
        Iterator it = fragmentWrapper.k().iterator();
        while (it.hasNext()) {
            Screen topScreen = ((ScreenContainer) it.next()).getTopScreen();
            Screen w5 = w(topScreen, nVar);
            if (w5 != null) {
                return w5;
            }
            if (topScreen != null && v(topScreen, nVar)) {
                return topScreen;
            }
        }
        return null;
    }

    public static ClassLoader x(ClassLoader classLoader) {
        if (classLoader != null) {
            return classLoader;
        }
        ClassLoader contextClassLoader = Thread.currentThread().getContextClassLoader();
        return contextClassLoader != null ? contextClassLoader : ClassLoader.getSystemClassLoader();
    }

    public static Bundle y(int i5, Parcel parcel) {
        int Y = Y(i5, parcel);
        int dataPosition = parcel.dataPosition();
        if (Y == 0) {
            return null;
        }
        Bundle readBundle = parcel.readBundle();
        parcel.setDataPosition(dataPosition + Y);
        return readBundle;
    }

    public static byte[] z(int i5, Parcel parcel) {
        int Y = Y(i5, parcel);
        int dataPosition = parcel.dataPosition();
        if (Y == 0) {
            return null;
        }
        byte[] createByteArray = parcel.createByteArray();
        parcel.setDataPosition(dataPosition + Y);
        return createByteArray;
    }

    public abstract void R(g4.g gVar, g4.g gVar2);

    public abstract void S(g4.g gVar, Thread thread);

    public abstract boolean m(g4.h hVar, g4.c cVar, g4.c cVar2);

    public abstract boolean n(g4.h hVar, Object obj, Object obj2);

    public abstract boolean o(g4.h hVar, g4.g gVar, g4.g gVar2);
}
