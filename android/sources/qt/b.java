package qt;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes4.dex */
public final class b extends c {
    public final void b(String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        c[] cVarArr = d.f17058c;
        int length = cVarArr.length;
        int i5 = 0;
        while (i5 < length) {
            c cVar = cVarArr[i5];
            i5++;
            cVar.getExplicitTag$timber_release().set(tag);
        }
    }

    @Override // qt.c
    public final void d(String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.d(str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void e(String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.e(str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void i(String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.i(str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void log(int i5, String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.log(i5, str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void v(String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.v(str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void w(String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.w(str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void wtf(String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.wtf(str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void d(Throwable th2) {
        for (c cVar : d.f17058c) {
            cVar.d(th2);
        }
    }

    @Override // qt.c
    public final void e(Throwable th2) {
        for (c cVar : d.f17058c) {
            cVar.e(th2);
        }
    }

    @Override // qt.c
    public final void i(Throwable th2) {
        for (c cVar : d.f17058c) {
            cVar.i(th2);
        }
    }

    @Override // qt.c
    public final void log(int i5, Throwable th2) {
        for (c cVar : d.f17058c) {
            cVar.log(i5, th2);
        }
    }

    @Override // qt.c
    public final void v(Throwable th2) {
        for (c cVar : d.f17058c) {
            cVar.v(th2);
        }
    }

    @Override // qt.c
    public final void w(Throwable th2) {
        for (c cVar : d.f17058c) {
            cVar.w(th2);
        }
    }

    @Override // qt.c
    public final void wtf(Throwable th2) {
        for (c cVar : d.f17058c) {
            cVar.wtf(th2);
        }
    }

    @Override // qt.c
    public final void d(Throwable th2, String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.d(th2, str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void e(Throwable th2, String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.e(th2, str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void i(Throwable th2, String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.i(th2, str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void log(int i5, Throwable th2, String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.log(i5, th2, str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void v(Throwable th2, String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.v(th2, str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void w(Throwable th2, String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.w(th2, str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void wtf(Throwable th2, String str, Object... args) {
        Intrinsics.checkNotNullParameter(args, "args");
        for (c cVar : d.f17058c) {
            cVar.wtf(th2, str, Arrays.copyOf(args, args.length));
        }
    }

    @Override // qt.c
    public final void log(int i5, String str, String message, Throwable th2) {
        Intrinsics.checkNotNullParameter(message, "message");
        throw new AssertionError();
    }
}
