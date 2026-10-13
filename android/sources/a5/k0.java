package a5;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Looper;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.react.uimanager.PixelUtil;
import com.google.android.gms.tasks.Task;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import io.sentry.Hint;
import io.sentry.android.core.q0;
import ip.s0;
import java.lang.ref.WeakReference;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;
import java.util.concurrent.Callable;
import java.util.concurrent.CancellationException;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Executor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import okhttp3.CacheControl;
import okhttp3.Headers;
import yq.c1;
import yq.p0;
import yq.w0;
import yq.z0;

/* loaded from: classes.dex */
public abstract class k0 {
    public static WeakReference a;

    public static boolean B(Hint hint, Class cls) {
        return cls.isInstance(hint.b("sentry:typeCheckHint"));
    }

    public static boolean C(Context context) {
        return context.getResources().getConfiguration().fontScale >= 1.3f;
    }

    public static boolean D(Hint hint) {
        return Boolean.TRUE.equals(hint.c(Boolean.class, "sentry:isFromHybridSdk"));
    }

    public static final boolean E(int i5, int i6, ResizeOptions resizeOptions) {
        return resizeOptions == null ? ((float) ((int) (((float) i5) * 1.3333334f))) >= 2048.0f && ((int) (((float) i6) * 1.3333334f)) >= 2048 : ((int) (((float) i5) * 1.3333334f)) >= resizeOptions.a && ((int) (((float) i6) * 1.3333334f)) >= resizeOptions.f4584b;
    }

    public static final boolean F(EncodedImage encodedImage, ResizeOptions resizeOptions) {
        if (encodedImage == null) {
            return false;
        }
        int rotationAngle = encodedImage.getRotationAngle();
        return (rotationAngle == 90 || rotationAngle == 270) ? E(encodedImage.getHeight(), encodedImage.getWidth(), resizeOptions) : E(encodedImage.getWidth(), encodedImage.getHeight(), resizeOptions);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x004a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static CacheControl N(Headers headers) {
        int i5;
        int i6;
        String str;
        int length;
        Headers headers2 = headers;
        Intrinsics.checkNotNullParameter(headers2, "headers");
        int size = headers2.size();
        boolean z5 = true;
        boolean z6 = true;
        int i10 = 0;
        String str2 = null;
        boolean z7 = false;
        boolean z8 = false;
        int i11 = -1;
        int i12 = -1;
        boolean z10 = false;
        boolean z11 = false;
        boolean z12 = false;
        int i13 = -1;
        int i14 = -1;
        boolean z13 = false;
        boolean z14 = false;
        boolean z15 = false;
        while (i10 < size) {
            int i15 = i10 + 1;
            String b10 = headers2.b(i10);
            String h6 = headers2.h(i10);
            if (kotlin.text.x.i(b10, "Cache-Control", z5)) {
                if (str2 == null) {
                    str2 = h6;
                    i5 = 0;
                    while (i5 < h6.length()) {
                        int length2 = h6.length();
                        boolean z16 = z5;
                        int i16 = i5;
                        while (true) {
                            if (i16 >= length2) {
                                i16 = h6.length();
                                break;
                            }
                            int i17 = i16 + 1;
                            if (StringsKt.E("=,;", h6.charAt(i16))) {
                                break;
                            }
                            i16 = i17;
                        }
                        String substring = h6.substring(i5, i16);
                        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
                        String obj = StringsKt.b0(substring).toString();
                        if (i16 == h6.length() || h6.charAt(i16) == ',' || h6.charAt(i16) == ';') {
                            i6 = size;
                            i5 = i16 + 1;
                            str = null;
                        } else {
                            int i18 = i16 + 1;
                            byte[] bArr = qs.b.a;
                            Intrinsics.checkNotNullParameter(h6, "<this>");
                            int length3 = h6.length();
                            while (true) {
                                if (i18 >= length3) {
                                    i6 = size;
                                    i18 = h6.length();
                                    break;
                                }
                                int i19 = i18 + 1;
                                i6 = size;
                                char charAt = h6.charAt(i18);
                                int i20 = length3;
                                if (charAt != ' ' && charAt != '\t') {
                                    break;
                                }
                                i18 = i19;
                                size = i6;
                                length3 = i20;
                            }
                            if (i18 >= h6.length() || h6.charAt(i18) != '\"') {
                                int length4 = h6.length();
                                int i21 = i18;
                                while (true) {
                                    if (i21 >= length4) {
                                        length = h6.length();
                                        break;
                                    }
                                    int i22 = i21 + 1;
                                    int i23 = length4;
                                    int i24 = i21;
                                    if (StringsKt.E(",;", h6.charAt(i21))) {
                                        length = i24;
                                        break;
                                    }
                                    i21 = i22;
                                    length4 = i23;
                                }
                                String substring2 = h6.substring(i18, length);
                                Intrinsics.checkNotNullExpressionValue(substring2, "this as java.lang.String…ing(startIndex, endIndex)");
                                i5 = length;
                                str = StringsKt.b0(substring2).toString();
                            } else {
                                int i25 = i18 + 1;
                                int I = StringsKt.I(h6, '\"', i25, 4);
                                str = h6.substring(i25, I);
                                Intrinsics.checkNotNullExpressionValue(str, "this as java.lang.String…ing(startIndex, endIndex)");
                                i5 = I + 1;
                            }
                        }
                        if ("no-cache".equalsIgnoreCase(obj)) {
                            z5 = z16;
                            z7 = z5;
                        } else if ("no-store".equalsIgnoreCase(obj)) {
                            z5 = z16;
                            z8 = z5;
                        } else {
                            if ("max-age".equalsIgnoreCase(obj)) {
                                i11 = qs.b.x(-1, str);
                            } else if ("s-maxage".equalsIgnoreCase(obj)) {
                                i12 = qs.b.x(-1, str);
                            } else if ("private".equalsIgnoreCase(obj)) {
                                z5 = z16;
                                z10 = z5;
                            } else if ("public".equalsIgnoreCase(obj)) {
                                z5 = z16;
                                z11 = z5;
                            } else if ("must-revalidate".equalsIgnoreCase(obj)) {
                                z5 = z16;
                                z12 = z5;
                            } else if ("max-stale".equalsIgnoreCase(obj)) {
                                i13 = qs.b.x(Integer.MAX_VALUE, str);
                            } else if ("min-fresh".equalsIgnoreCase(obj)) {
                                i14 = qs.b.x(-1, str);
                            } else if ("only-if-cached".equalsIgnoreCase(obj)) {
                                z5 = z16;
                                z13 = z5;
                            } else if ("no-transform".equalsIgnoreCase(obj)) {
                                z5 = z16;
                                z14 = z5;
                            } else if ("immutable".equalsIgnoreCase(obj)) {
                                z5 = z16;
                                z15 = z5;
                            }
                            z5 = z16;
                        }
                        size = i6;
                    }
                    headers2 = headers;
                    i10 = i15;
                }
            } else if (!kotlin.text.x.i(b10, "Pragma", z5)) {
                headers2 = headers;
                i10 = i15;
            }
            z6 = false;
            i5 = 0;
            while (i5 < h6.length()) {
            }
            headers2 = headers;
            i10 = i15;
        }
        return new CacheControl(z7, z8, i11, i12, z10, z11, z12, i13, i14, z13, z14, z15, !z6 ? null : str2);
    }

    public static final float O(float f2, float f10) {
        return f10 > 0.0f ? f2 / f10 : PixelUtil.toDIPFromPixel(f2);
    }

    public static final float P(ViewGroup viewGroup, float f2) {
        Intrinsics.checkNotNullParameter(viewGroup, "<this>");
        return O(f2, viewGroup.getResources().getDisplayMetrics().density);
    }

    public static final yq.y Q(yq.y yVar, ArrayList arrayList) {
        yq.h0 h0Var;
        yVar.l0().size();
        arrayList.size();
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(arrayList, 10));
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            er.d dVar = (er.d) it.next();
            dVar.getClass();
            yq.y yVar2 = dVar.f8223c;
            yq.y yVar3 = dVar.f8222b;
            s0 s0Var = dVar.a;
            zq.d.a.b(yVar3, yVar2);
            if (!Intrinsics.areEqual(yVar3, yVar2)) {
                c1 variance = s0Var.getVariance();
                c1 c1Var = c1.f21014v;
                if (variance != c1Var) {
                    if (fp.i.F(yVar3) && s0Var.getVariance() != c1Var) {
                        c1 c1Var2 = c1.f21015w;
                        if (c1Var2 == s0Var.getVariance()) {
                            c1Var2 = c1.f21013i;
                        }
                        h0Var = new yq.h0(yVar2, c1Var2);
                    } else {
                        if (yVar2 == null) {
                            fp.i.a(140);
                            throw null;
                        }
                        if (fp.i.y(yVar2) && yVar2.t0()) {
                            if (c1Var == s0Var.getVariance()) {
                                c1Var = c1.f21013i;
                            }
                            h0Var = new yq.h0(yVar3, c1Var);
                        } else {
                            c1 c1Var3 = c1.f21015w;
                            if (c1Var3 == s0Var.getVariance()) {
                                c1Var3 = c1.f21013i;
                            }
                            h0Var = new yq.h0(yVar2, c1Var3);
                        }
                    }
                    arrayList2.add(h0Var);
                }
            }
            h0Var = new yq.h0(yVar3);
            arrayList2.add(h0Var);
        }
        return yq.c.p(yVar, arrayList2, null, 6);
    }

    public static final void R(Object[] objArr, int i5, int i6) {
        Intrinsics.checkNotNullParameter(objArr, "<this>");
        while (i5 < i6) {
            Intrinsics.checkNotNullParameter(objArr, "<this>");
            objArr[i5] = null;
            i5++;
        }
    }

    public static final int S(Context context, int i5) {
        Intrinsics.checkNotNullParameter(context, "context");
        TypedValue typedValue = new TypedValue();
        if (context.getTheme().resolveAttribute(i5, typedValue, true)) {
            return TypedValue.complexToDimensionPixelSize(typedValue.data, context.getResources().getDisplayMetrics());
        }
        throw new IllegalArgumentException("[RNScreens] Unable to resolve Material theme dimension.");
    }

    public static boolean U(Hint hint) {
        return !(io.sentry.hints.d.class.isInstance(hint.b("sentry:typeCheckHint")) || io.sentry.hints.b.class.isInstance(hint.b("sentry:typeCheckHint"))) || q0.class.isInstance(hint.b("sentry:typeCheckHint"));
    }

    public static final void W(BottomSheetBehavior bottomSheetBehavior, Integer num, boolean z5, Boolean bool) {
        Intrinsics.checkNotNullParameter(bottomSheetBehavior, "<this>");
        bottomSheetBehavior.J = true;
        bottomSheetBehavior.L(true);
        if (z5) {
            bottomSheetBehavior.P(3);
        }
        bottomSheetBehavior.f5968l = num.intValue();
        if (bool != null) {
            bottomSheetBehavior.f5970n = bool.booleanValue();
        }
    }

    public static final void X(BottomSheetBehavior bottomSheetBehavior, Integer num, Integer num2, Integer num3, Float f2, Integer num4, Boolean bool) {
        Intrinsics.checkNotNullParameter(bottomSheetBehavior, "<this>");
        bottomSheetBehavior.J = false;
        bottomSheetBehavior.L(false);
        if (num != null) {
            bottomSheetBehavior.P(num.intValue());
        }
        if (num2 != null) {
            bottomSheetBehavior.O(num2.intValue());
        }
        if (f2 != null) {
            bottomSheetBehavior.M(f2.floatValue());
        }
        if (num4 != null) {
            bottomSheetBehavior.K(num4.intValue());
        }
        if (num3 != null) {
            bottomSheetBehavior.f5968l = num3.intValue();
        }
        if (bool != null) {
            bottomSheetBehavior.f5970n = bool.booleanValue();
        }
    }

    public static /* synthetic */ void Y(BottomSheetBehavior bottomSheetBehavior, Integer num, Integer num2, Float f2, Integer num3, Boolean bool, int i5) {
        Integer num4 = (i5 & 1) != 0 ? null : 3;
        if ((i5 & 2) != 0) {
            num = null;
        }
        if ((i5 & 4) != 0) {
            num2 = null;
        }
        if ((i5 & 8) != 0) {
            f2 = null;
        }
        if ((i5 & 16) != 0) {
            num3 = null;
        }
        Boolean bool2 = (i5 & 32) != 0 ? null : bool;
        X(bottomSheetBehavior, num4, num, num2, f2, num3, bool2);
    }

    public static final void Z(BottomSheetBehavior bottomSheetBehavior, Integer num, Integer num2, Integer num3, Boolean bool) {
        Intrinsics.checkNotNullParameter(bottomSheetBehavior, "<this>");
        bottomSheetBehavior.J = false;
        bottomSheetBehavior.L(true);
        if (num != null) {
            bottomSheetBehavior.P(num.intValue());
        }
        if (num2 != null) {
            bottomSheetBehavior.O(num2.intValue());
        }
        if (num3 != null) {
            bottomSheetBehavior.f5968l = num3.intValue();
        }
        if (bool != null) {
            bottomSheetBehavior.f5970n = bool.booleanValue();
        }
    }

    public static /* synthetic */ void a(int i5) {
        String str = (i5 == 7 || i5 == 10) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 7 || i5 == 10) ? 2 : 3];
        switch (i5) {
            case 1:
            case 3:
            case 18:
            case 20:
                objArr[0] = "supertype";
                break;
            case 2:
            case 17:
            case 19:
            default:
                objArr[0] = "subtype";
                break;
            case 4:
                objArr[0] = "typeCheckingProcedureCallbacks";
                break;
            case 5:
            case 8:
            case 23:
                objArr[0] = "parameter";
                break;
            case 6:
            case 9:
                objArr[0] = "argument";
                break;
            case 7:
            case 10:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/types/checker/TypeCheckingProcedure";
                break;
            case 11:
                objArr[0] = "type1";
                break;
            case 12:
                objArr[0] = "type2";
                break;
            case 13:
                objArr[0] = "typeParameter";
                break;
            case 14:
                objArr[0] = "typeArgument";
                break;
            case 15:
                objArr[0] = "typeParameterVariance";
                break;
            case 16:
                objArr[0] = "typeArgumentVariance";
                break;
            case 21:
                objArr[0] = "subtypeArgumentProjection";
                break;
            case 22:
                objArr[0] = "supertypeArgumentProjection";
                break;
        }
        if (i5 == 7) {
            objArr[1] = "getOutType";
        } else if (i5 != 10) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/types/checker/TypeCheckingProcedure";
        } else {
            objArr[1] = "getInType";
        }
        switch (i5) {
            case 5:
            case 6:
                objArr[2] = "getOutType";
                break;
            case 7:
            case 10:
                break;
            case 8:
            case 9:
                objArr[2] = "getInType";
                break;
            case 11:
            case 12:
                objArr[2] = "equalTypes";
                break;
            case 13:
            case 14:
            case 15:
            case 16:
                objArr[2] = "getEffectiveProjectionKind";
                break;
            case 17:
            case 18:
                objArr[2] = "isSubtypeOf";
                break;
            case 19:
            case 20:
                objArr[2] = "checkSubtypeForTheSameConstructor";
                break;
            case 21:
            case 22:
            case 23:
                objArr[2] = "capture";
                break;
            default:
                objArr[2] = "findCorrespondingSupertype";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 7 && i5 != 10) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public static /* synthetic */ void a0(BottomSheetBehavior bottomSheetBehavior, Integer num, Integer num2, Boolean bool, int i5) {
        Integer num3 = (i5 & 1) != 0 ? null : 3;
        if ((i5 & 2) != 0) {
            num = null;
        }
        if ((i5 & 4) != 0) {
            num2 = null;
        }
        if ((i5 & 8) != 0) {
            bool = null;
        }
        Z(bottomSheetBehavior, num3, num, num2, bool);
    }

    public static String b(String str, String str2) {
        return k0.d.l(str, ":", str2);
    }

    public static Object b0(Task task) {
        if (task.m()) {
            return task.i();
        }
        if (task.k()) {
            throw new CancellationException("Task is already canceled");
        }
        throw new ExecutionException(task.h());
    }

    public static void c(Object obj) {
        if (obj == null) {
            throw new NullPointerException("Cannot return null from a non-@Nullable @Provides method");
        }
    }

    public static /* synthetic */ String c0(int i5, String str) {
        return str + i5;
    }

    public static final String d(Method method) {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(method.getName());
        Class<?>[] parameterTypes = method.getParameterTypes();
        Intrinsics.checkNotNullExpressionValue(parameterTypes, "getParameterTypes(...)");
        sb2.append(kotlin.collections.x.A(parameterTypes, "", "(", ")", cp.b.J, 24));
        Class<?> returnType = method.getReturnType();
        Intrinsics.checkNotNullExpressionValue(returnType, "getReturnType(...)");
        sb2.append(op.c.b(returnType));
        return sb2.toString();
    }

    public static final String e(Object[] objArr, int i5, int i6, kotlin.collections.l lVar) {
        StringBuilder sb2 = new StringBuilder((i6 * 3) + 2);
        sb2.append("[");
        for (int i10 = 0; i10 < i6; i10++) {
            if (i10 > 0) {
                sb2.append(", ");
            }
            Object obj = objArr[i5 + i10];
            if (obj == lVar) {
                sb2.append("(this Collection)");
            } else {
                sb2.append(obj);
            }
        }
        sb2.append("]");
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    public static final er.a g(yq.y type) {
        Object Q;
        er.d dVar;
        Intrinsics.checkNotNullParameter(type, "type");
        if (yq.c.k(type)) {
            er.a g6 = g(yq.c.l(type));
            er.a g10 = g(yq.c.E(type));
            return new er.a(yq.c.h(yq.c.e(yq.c.l((yq.y) g6.a), yq.c.E((yq.y) g10.a)), type), yq.c.h(yq.c.e(yq.c.l((yq.y) g6.f8220b), yq.c.E((yq.y) g10.f8220b)), type));
        }
        p0 r02 = type.r0();
        Intrinsics.checkNotNullParameter(type, "<this>");
        boolean z5 = true;
        if (type.r0() instanceof lq.b) {
            Intrinsics.checkNotNull(r02, "null cannot be cast to non-null type org.jetbrains.kotlin.resolve.calls.inference.CapturedTypeConstructor");
            yq.s0 d6 = ((lq.b) r02).d();
            yq.y b10 = d6.b();
            Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
            yq.y h6 = z0.h(b10, type.t0());
            Intrinsics.checkNotNullExpressionValue(h6, "makeNullableIfNeeded(...)");
            int ordinal = d6.a().ordinal();
            if (ordinal == 1) {
                return new er.a(h6, com.facebook.imagepipeline.nativecode.c.v(type).p());
            }
            if (ordinal != 2) {
                throw new AssertionError("Only nontrivial projections should have been captured, not: " + d6);
            }
            yq.c0 o6 = com.facebook.imagepipeline.nativecode.c.v(type).o();
            Intrinsics.checkNotNullExpressionValue(o6, "getNothingType(...)");
            yq.y h7 = z0.h(o6, type.t0());
            Intrinsics.checkNotNullExpressionValue(h7, "makeNullableIfNeeded(...)");
            return new er.a(h7, h6);
        }
        if (type.l0().isEmpty() || type.l0().size() != r02.getParameters().size()) {
            return new er.a(type, type);
        }
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        List l02 = type.l0();
        List parameters = r02.getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
        Iterator it = CollectionsKt.n0(l02, parameters).iterator();
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            yq.s0 s0Var = (yq.s0) pair.f13474d;
            s0 s0Var2 = (s0) pair.f13475e;
            Intrinsics.checkNotNull(s0Var2);
            c1 variance = s0Var2.getVariance();
            if (variance == null) {
                w0.a(35);
                throw null;
            }
            if (s0Var == null) {
                w0.a(36);
                throw null;
            }
            w0 w0Var = w0.f21077b;
            int ordinal2 = (s0Var.c() ? c1.f21015w : w0.b(variance, s0Var.a())).ordinal();
            if (ordinal2 == 0) {
                yq.y b11 = s0Var.b();
                Intrinsics.checkNotNullExpressionValue(b11, "getType(...)");
                yq.y b12 = s0Var.b();
                Intrinsics.checkNotNullExpressionValue(b12, "getType(...)");
                dVar = new er.d(s0Var2, b11, b12);
            } else if (ordinal2 == 1) {
                yq.y b13 = s0Var.b();
                Intrinsics.checkNotNullExpressionValue(b13, "getType(...)");
                yq.c0 p3 = oq.e.e(s0Var2).p();
                Intrinsics.checkNotNullExpressionValue(p3, "getNullableAnyType(...)");
                dVar = new er.d(s0Var2, b13, p3);
            } else {
                if (ordinal2 != 2) {
                    throw new fo.n();
                }
                yq.c0 o7 = oq.e.e(s0Var2).o();
                Intrinsics.checkNotNullExpressionValue(o7, "getNothingType(...)");
                yq.y b14 = s0Var.b();
                Intrinsics.checkNotNullExpressionValue(b14, "getType(...)");
                dVar = new er.d(s0Var2, o7, b14);
            }
            if (s0Var.c()) {
                arrayList.add(dVar);
                arrayList2.add(dVar);
            } else {
                er.a g11 = g(dVar.f8222b);
                yq.y yVar = (yq.y) g11.a;
                yq.y yVar2 = (yq.y) g11.f8220b;
                er.a g12 = g(dVar.f8223c);
                yq.y yVar3 = (yq.y) g12.a;
                yq.y yVar4 = (yq.y) g12.f8220b;
                s0 s0Var3 = dVar.a;
                er.d dVar2 = new er.d(s0Var3, yVar2, yVar3);
                er.d dVar3 = new er.d(s0Var3, yVar, yVar4);
                arrayList.add(dVar2);
                arrayList2.add(dVar3);
            }
        }
        if (!arrayList.isEmpty()) {
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                er.d dVar4 = (er.d) it2.next();
                dVar4.getClass();
                if (!zq.d.a.b(dVar4.f8222b, dVar4.f8223c)) {
                    break;
                }
            }
        }
        z5 = false;
        if (z5) {
            Q = com.facebook.imagepipeline.nativecode.c.v(type).o();
            Intrinsics.checkNotNullExpressionValue(Q, "getNothingType(...)");
        } else {
            Q = Q(type, arrayList);
        }
        return new er.a(Q, Q(type, arrayList2));
    }

    public static Object h(Task task) {
        bf.t.f("Must not be called on the main application thread");
        Looper myLooper = Looper.myLooper();
        if (myLooper != null && Objects.equals(myLooper.getThread().getName(), "GoogleApiHandler")) {
            throw new IllegalStateException("Must not be called on GoogleApiHandler thread.");
        }
        bf.t.h(task, "Task must not be null");
        if (task.l()) {
            return b0(task);
        }
        ha.l lVar = new ha.l(18, false);
        Executor executor = jg.h.f12758b;
        task.d(executor, lVar);
        task.c(executor, lVar);
        task.a(executor, lVar);
        ((CountDownLatch) lVar.f9613d).await();
        return b0(task);
    }

    public static Object i(Task task, long j) {
        TimeUnit timeUnit = TimeUnit.SECONDS;
        bf.t.f("Must not be called on the main application thread");
        Looper myLooper = Looper.myLooper();
        if (myLooper != null && Objects.equals(myLooper.getThread().getName(), "GoogleApiHandler")) {
            throw new IllegalStateException("Must not be called on GoogleApiHandler thread.");
        }
        bf.t.h(task, "Task must not be null");
        bf.t.h(timeUnit, "TimeUnit must not be null");
        if (task.l()) {
            return b0(task);
        }
        ha.l lVar = new ha.l(18, false);
        Executor executor = jg.h.f12758b;
        task.d(executor, lVar);
        task.c(executor, lVar);
        task.a(executor, lVar);
        if (((CountDownLatch) lVar.f9613d).await(j, timeUnit)) {
            return b0(task);
        }
        throw new TimeoutException("Timed out waiting for Task");
    }

    public static String j(String str, String str2, String str3) {
        return str + ":" + str2 + ":" + str3;
    }

    public static final int k(long[] jArr, long j) {
        int length = jArr.length - 1;
        int i5 = 0;
        while (i5 <= length) {
            int i6 = (i5 + length) >>> 1;
            long j5 = jArr[i6];
            if (j > j5) {
                i5 = i6 + 1;
            } else {
                if (j >= j5) {
                    return i6;
                }
                length = i6 - 1;
            }
        }
        return -(i5 + 1);
    }

    public static jg.l l(Callable callable, Executor executor) {
        bf.t.h(executor, "Executor must not be null");
        jg.l lVar = new jg.l();
        executor.execute(new ii.o(16, lVar, callable));
        return lVar;
    }

    public static rq.o p(String debugName, Collection types) {
        Intrinsics.checkNotNullParameter(debugName, "message");
        Intrinsics.checkNotNullParameter(types, "types");
        Collection collection = types;
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(collection, 10));
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            arrayList.add(((yq.y) it.next()).N());
        }
        ir.h scopes = ys.l.o(arrayList);
        Intrinsics.checkNotNullParameter(debugName, "debugName");
        Intrinsics.checkNotNullParameter(scopes, "scopes");
        int i5 = scopes.f12264d;
        rq.o aVar = i5 != 0 ? i5 != 1 ? new rq.a(debugName, (rq.o[]) scopes.toArray(new rq.o[0])) : (rq.o) scopes.get(0) : rq.n.f17557b;
        return scopes.f12264d <= 1 ? aVar : new rq.k(aVar);
    }

    public static Hint q(Object obj) {
        Hint hint = new Hint();
        hint.d(obj, "sentry:typeCheckHint");
        return hint;
    }

    public static jg.l r(Exception exc) {
        jg.l lVar = new jg.l();
        lVar.p(exc);
        return lVar;
    }

    public static jg.l s(Object obj) {
        jg.l lVar = new jg.l();
        lVar.q(obj);
        return lVar;
    }

    public static final int t(dp.g gVar) {
        Intrinsics.checkNotNullParameter(gVar, "<this>");
        return gVar.a().size();
    }

    public static ColorStateList u(Context context, TypedArray typedArray, int i5) {
        int resourceId;
        ColorStateList c6;
        return (!typedArray.hasValue(i5) || (resourceId = typedArray.getResourceId(i5, 0)) == 0 || (c6 = y0.b.c(context, resourceId)) == null) ? typedArray.getColorStateList(i5) : c6;
    }

    public static ColorStateList v(Context context, e4.m mVar, int i5) {
        int resourceId;
        ColorStateList c6;
        TypedArray typedArray = (TypedArray) mVar.f7964i;
        return (!typedArray.hasValue(i5) || (resourceId = typedArray.getResourceId(i5, 0)) == 0 || (c6 = y0.b.c(context, resourceId)) == null) ? mVar.T(i5) : c6;
    }

    public static int w(Context context, TypedArray typedArray, int i5, int i6) {
        TypedValue typedValue = new TypedValue();
        if (!typedArray.getValue(i5, typedValue) || typedValue.type != 2) {
            return typedArray.getDimensionPixelSize(i5, i6);
        }
        TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(new int[]{typedValue.data});
        int dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(0, i6);
        obtainStyledAttributes.recycle();
        return dimensionPixelSize;
    }

    public static Drawable x(Context context, TypedArray typedArray, int i5) {
        int resourceId;
        Drawable J;
        return (!typedArray.hasValue(i5) || (resourceId = typedArray.getResourceId(i5, 0)) == 0 || (J = ys.d.J(context, resourceId)) == null) ? typedArray.getDrawable(i5) : J;
    }

    public static int y(Context context, int i5) {
        if (i5 == 0) {
            return 0;
        }
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(i5, lg.a.C);
        TypedValue typedValue = new TypedValue();
        boolean value = obtainStyledAttributes.getValue(4, typedValue);
        if (!value) {
            value = obtainStyledAttributes.getValue(2, typedValue);
        }
        obtainStyledAttributes.recycle();
        if (value) {
            return typedValue.getComplexUnit() == 2 ? Math.round(TypedValue.complexToFloat(typedValue.data) * context.getResources().getDisplayMetrics().density) : TypedValue.complexToDimensionPixelSize(typedValue.data, context.getResources().getDisplayMetrics());
        }
        return 0;
    }

    public int A() {
        return 0;
    }

    public abstract Rect I();

    public abstract void K(int i5);

    public abstract void L(View view, int i5, int i6);

    public abstract void M(float f2, float f10, View view);

    public void T(ip.d member, Collection overridden) {
        Intrinsics.checkNotNullParameter(member, "member");
        Intrinsics.checkNotNullParameter(overridden, "overridden");
        member.g0(overridden);
    }

    public abstract boolean V(int i5, View view);

    public abstract void f(ip.d dVar);

    public abstract int m(int i5, View view);

    public abstract int n(int i5, View view);

    public abstract void o(ip.d dVar, ip.d dVar2);

    public int z(View view) {
        return 0;
    }

    public void H() {
    }

    public void G(int i5, int i6) {
    }

    public void J(int i5, View view) {
    }
}
