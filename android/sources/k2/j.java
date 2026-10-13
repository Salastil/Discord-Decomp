package k2;

import android.os.Handler;
import android.os.Looper;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.Spanned;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.concurrent.locks.ReentrantReadWriteLock;

/* loaded from: classes.dex */
public final class j {
    public static final Object j = new Object();
    public static volatile j k;
    public final ReentrantReadWriteLock a;

    /* renamed from: b, reason: collision with root package name */
    public final s.f f13125b;

    /* renamed from: c, reason: collision with root package name */
    public volatile int f13126c;

    /* renamed from: d, reason: collision with root package name */
    public final Handler f13127d;

    /* renamed from: e, reason: collision with root package name */
    public final a5.a f13128e;

    /* renamed from: f, reason: collision with root package name */
    public final i f13129f;

    /* renamed from: g, reason: collision with root package name */
    public final l8.a f13130g;

    /* renamed from: h, reason: collision with root package name */
    public final int f13131h;

    /* renamed from: i, reason: collision with root package name */
    public final d f13132i;

    public j(t tVar) {
        ReentrantReadWriteLock reentrantReadWriteLock = new ReentrantReadWriteLock();
        this.a = reentrantReadWriteLock;
        this.f13126c = 3;
        i iVar = (i) tVar.f13123b;
        this.f13129f = iVar;
        int i5 = tVar.a;
        this.f13131h = i5;
        this.f13132i = (d) tVar.f13124c;
        this.f13127d = new Handler(Looper.getMainLooper());
        this.f13125b = new s.f(0);
        this.f13130g = new l8.a(11);
        a5.a aVar = new a5.a(this);
        this.f13128e = aVar;
        reentrantReadWriteLock.writeLock().lock();
        if (i5 == 0) {
            try {
                this.f13126c = 0;
            } catch (Throwable th2) {
                this.a.writeLock().unlock();
                throw th2;
            }
        }
        reentrantReadWriteLock.writeLock().unlock();
        if (b() == 0) {
            try {
                iVar.a(new e(aVar));
            } catch (Throwable th3) {
                d(th3);
            }
        }
    }

    public static j a() {
        j jVar;
        synchronized (j) {
            try {
                jVar = k;
                if (!(jVar != null)) {
                    throw new IllegalStateException("EmojiCompat is not initialized.\n\nYou must initialize EmojiCompat prior to referencing the EmojiCompat instance.\n\nThe most likely cause of this error is disabling the EmojiCompatInitializer\neither explicitly in AndroidManifest.xml, or by including\nandroidx.emoji2:emoji2-bundled.\n\nAutomatic initialization is typically performed by EmojiCompatInitializer. If\nyou are not expecting to initialize EmojiCompat manually in your application,\nplease check to ensure it has not been removed from your APK's manifest. You can\ndo this in Android Studio using Build > Analyze APK.\n\nIn the APK Analyzer, ensure that the startup entry for\nEmojiCompatInitializer and InitializationProvider is present in\n AndroidManifest.xml. If it is missing or contains tools:node=\"remove\", and you\nintend to use automatic configuration, verify:\n\n  1. Your application does not include emoji2-bundled\n  2. All modules do not contain an exclusion manifest rule for\n     EmojiCompatInitializer or InitializationProvider. For more information\n     about manifest exclusions see the documentation for the androidx startup\n     library.\n\nIf you intend to use emoji2-bundled, please call EmojiCompat.init. You can\nlearn more in the documentation for BundledEmojiCompatConfig.\n\nIf you intended to perform manual configuration, it is recommended that you call\nEmojiCompat.init immediately on application startup.\n\nIf you still cannot resolve this issue, please open a bug with your specific\nconfiguration to help improve error message.");
                }
            } finally {
            }
        }
        return jVar;
    }

    public final int b() {
        this.a.readLock().lock();
        try {
            return this.f13126c;
        } finally {
            this.a.readLock().unlock();
        }
    }

    public final void c() {
        if (!(this.f13131h == 1)) {
            throw new IllegalStateException("Set metadataLoadStrategy to LOAD_STRATEGY_MANUAL to execute manual loading");
        }
        if (b() == 1) {
            return;
        }
        this.a.writeLock().lock();
        try {
            if (this.f13126c == 0) {
                return;
            }
            this.f13126c = 0;
            this.a.writeLock().unlock();
            a5.a aVar = this.f13128e;
            j jVar = (j) aVar.a;
            try {
                jVar.f13129f.a(new e(aVar));
            } catch (Throwable th2) {
                jVar.d(th2);
            }
        } finally {
            this.a.writeLock().unlock();
        }
    }

    public final void d(Throwable th2) {
        ArrayList arrayList = new ArrayList();
        this.a.writeLock().lock();
        try {
            this.f13126c = 2;
            arrayList.addAll(this.f13125b);
            this.f13125b.clear();
            this.a.writeLock().unlock();
            this.f13127d.post(new af.p(arrayList, this.f13126c, th2));
        } catch (Throwable th3) {
            this.a.writeLock().unlock();
            throw th3;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x00a4 A[Catch: all -> 0x0087, TryCatch #2 {all -> 0x0087, blocks: (B:28:0x005f, B:31:0x0064, B:33:0x0068, B:35:0x0075, B:37:0x0094, B:39:0x009e, B:41:0x00a1, B:43:0x00a4, B:45:0x00b4, B:46:0x00b7), top: B:27:0x005f }] */
    /* JADX WARN: Removed duplicated region for block: B:75:0x010a  */
    /* JADX WARN: Removed duplicated region for block: B:77:? A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:86:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final CharSequence e(CharSequence charSequence, int i5, int i6) {
        Throwable th2;
        CharSequence charSequence2;
        int i10;
        int i11;
        y[] yVarArr;
        if (!(b() == 1)) {
            throw new IllegalStateException("Not initialized yet");
        }
        if (i5 < 0) {
            throw new IllegalArgumentException("start cannot be negative");
        }
        if (i6 < 0) {
            throw new IllegalArgumentException("end cannot be negative");
        }
        ta.a.h("start should be <= than end", i5 <= i6);
        a0 a0Var = null;
        if (charSequence == null) {
            return null;
        }
        ta.a.h("start should be < than charSequence length", i5 <= charSequence.length());
        ta.a.h("end should be < than charSequence length", i6 <= charSequence.length());
        if (charSequence.length() == 0 || i5 == i6) {
            return charSequence;
        }
        r rVar = (r) this.f13128e.f121b;
        rVar.getClass();
        boolean z5 = charSequence instanceof w;
        if (z5) {
            ((w) charSequence).a();
        }
        try {
            if (!z5) {
                try {
                    if (!(charSequence instanceof Spannable)) {
                        if ((charSequence instanceof Spanned) && ((Spanned) charSequence).nextSpanTransition(i5 - 1, i6 + 1, y.class) <= i6) {
                            a0Var = new a0();
                            a0Var.f13119d = false;
                            a0Var.f13120e = new SpannableString(charSequence);
                        }
                        if (a0Var != null && (yVarArr = (y[]) a0Var.f13120e.getSpans(i5, i6, y.class)) != null && yVarArr.length > 0) {
                            for (y yVar : yVarArr) {
                                int spanStart = a0Var.f13120e.getSpanStart(yVar);
                                int spanEnd = a0Var.f13120e.getSpanEnd(yVar);
                                if (spanStart != i6) {
                                    a0Var.removeSpan(yVar);
                                }
                                i5 = Math.min(spanStart, i5);
                                i6 = Math.max(spanEnd, i6);
                            }
                        }
                        i10 = i5;
                        i11 = i6;
                        if (i10 != i11 || i10 >= charSequence.length()) {
                            charSequence2 = charSequence;
                            if (!z5) {
                                return charSequence2;
                            }
                        } else {
                            try {
                                charSequence2 = charSequence;
                            } catch (Throwable th3) {
                                charSequence2 = charSequence;
                                th2 = th3;
                                if (z5) {
                                    throw th2;
                                }
                                ((w) charSequence2).b();
                                throw th2;
                            }
                            try {
                                a0 a0Var2 = (a0) rVar.F(charSequence2, i10, i11, Integer.MAX_VALUE, false, new e4.r(14, a0Var, (l8.a) rVar.f13142e));
                                if (a0Var2 != null) {
                                    Spannable spannable = a0Var2.f13120e;
                                    if (z5) {
                                        ((w) charSequence2).b();
                                    }
                                    return spannable;
                                }
                                if (!z5) {
                                    return charSequence2;
                                }
                            } catch (Throwable th4) {
                                th = th4;
                                th2 = th;
                                if (z5) {
                                }
                            }
                        }
                        ((w) charSequence2).b();
                        return charSequence2;
                    }
                } catch (Throwable th5) {
                    th2 = th5;
                    charSequence2 = charSequence;
                    if (z5) {
                    }
                }
            }
            a0Var = new a0((Spannable) charSequence);
            if (a0Var != null) {
                while (r1 < r5) {
                }
            }
            i10 = i5;
            i11 = i6;
            if (i10 != i11) {
            }
            charSequence2 = charSequence;
            if (!z5) {
            }
            ((w) charSequence2).b();
            return charSequence2;
        } catch (Throwable th6) {
            th = th6;
            charSequence2 = charSequence;
            th2 = th;
            if (z5) {
            }
        }
    }

    public final void f(h hVar) {
        ta.a.k(hVar, "initCallback cannot be null");
        this.a.writeLock().lock();
        try {
            if (this.f13126c != 1 && this.f13126c != 2) {
                this.f13125b.add(hVar);
                this.a.writeLock().unlock();
            }
            this.f13127d.post(new af.p(Arrays.asList(hVar), this.f13126c, (Throwable) null));
            this.a.writeLock().unlock();
        } catch (Throwable th2) {
            this.a.writeLock().unlock();
            throw th2;
        }
    }
}
