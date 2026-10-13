package j0;

import android.os.Handler;
import android.os.Looper;
import android.view.Choreographer;
import com.margelo.nitro.rive.o0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import nr.g0;
import nr.x;
import sr.q;

/* loaded from: classes.dex */
public final class a extends Lambda implements Function0 {
    public static final a E;
    public static final a F;
    public static final a G;
    public static final a H;
    public static final a I;
    public static final a J;
    public static final a K;
    public static final a L;
    public static final a M;
    public static final a N;
    public static final a O;
    public static final a P;
    public static final a Q;
    public static final a R;
    public static final a S;
    public static final a T;
    public static final a U;
    public static final a V;
    public static final a W;

    /* renamed from: e, reason: collision with root package name */
    public static final a f12354e;

    /* renamed from: i, reason: collision with root package name */
    public static final a f12355i;

    /* renamed from: v, reason: collision with root package name */
    public static final a f12356v;

    /* renamed from: w, reason: collision with root package name */
    public static final a f12357w;

    /* renamed from: x, reason: collision with root package name */
    public static final a f12358x;

    /* renamed from: y, reason: collision with root package name */
    public static final a f12359y;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12360d;

    static {
        int i5 = 0;
        f12354e = new a(i5, 0);
        f12355i = new a(i5, 1);
        f12356v = new a(i5, 2);
        f12357w = new a(i5, 3);
        f12358x = new a(i5, 4);
        f12359y = new a(i5, 5);
        E = new a(i5, 6);
        F = new a(i5, 7);
        G = new a(i5, 8);
        H = new a(i5, 9);
        I = new a(i5, 10);
        J = new a(i5, 11);
        K = new a(i5, 12);
        L = new a(i5, 13);
        M = new a(i5, 14);
        N = new a(i5, 15);
        O = new a(i5, 16);
        P = new a(i5, 17);
        Q = new a(i5, 18);
        R = new a(i5, 19);
        S = new a(i5, 20);
        T = new a(i5, 21);
        U = new a(i5, 22);
        V = new a(i5, 23);
        W = new a(i5, 24);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(int i5, int i6) {
        super(i5);
        this.f12360d = i6;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Choreographer choreographer;
        Continuation continuation = null;
        switch (this.f12360d) {
            case 0:
                b.a("LocalConfiguration");
                throw null;
            case 1:
                b.a("LocalContext");
                throw null;
            case 2:
                b.a("LocalImageVectorCache");
                throw null;
            case 3:
                b.a("LocalLifecycleOwner");
                throw null;
            case 4:
                b.a("LocalSavedStateRegistryOwner");
                throw null;
            case 5:
                b.a("LocalView");
                throw null;
            case 6:
                if (Looper.myLooper() == Looper.getMainLooper()) {
                    choreographer = Choreographer.getInstance();
                } else {
                    ur.e eVar = g0.a;
                    choreographer = (Choreographer) x.w(q.a, new o0(2, continuation, 1));
                }
                Intrinsics.checkNotNullExpressionValue(choreographer, "if (isMainThread()) Chor…eographer.getInstance() }");
                Handler o6 = com.facebook.imagepipeline.nativecode.c.o(Looper.getMainLooper());
                Intrinsics.checkNotNullExpressionValue(o6, "createAsync(Looper.getMainLooper())");
                d dVar = new d(choreographer, o6);
                return kotlin.coroutines.e.c(dVar, dVar.I);
            case 7:
            case 8:
                return null;
            case 9:
                g.a("LocalAutofillTree");
                throw null;
            case 10:
                g.a("LocalClipboardManager");
                throw null;
            case 11:
                g.a("LocalDensity");
                throw null;
            case 12:
                g.a("LocalFocusManager");
                throw null;
            case 13:
                g.a("LocalFontFamilyResolver");
                throw null;
            case 14:
                g.a("LocalFontLoader");
                throw null;
            case 15:
                g.a("LocalHapticFeedback");
                throw null;
            case 16:
                g.a("LocalInputManager");
                throw null;
            case 17:
                g.a("LocalLayoutDirection");
                throw null;
            case 18:
                throw new IllegalStateException("No PlatformTextInputPluginRegistry provided");
            case 19:
            case 20:
                return null;
            case 21:
                g.a("LocalTextToolbar");
                throw null;
            case 22:
                g.a("LocalUriHandler");
                throw null;
            case 23:
                g.a("LocalViewConfiguration");
                throw null;
            default:
                g.a("LocalWindowInfo");
                throw null;
        }
    }
}
