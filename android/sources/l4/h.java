package l4;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Parcelable;
import android.text.TextUtils;
import android.widget.ImageView;
import androidx.annotation.NonNull;
import com.airbnb.android.react.lottie.LottieAnimationViewManager;
import com.discord.R;
import com.facebook.react.uimanager.ThemedReactContext;
import io.sentry.android.core.h1;
import java.io.ByteArrayInputStream;
import java.io.InputStream;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.Callable;
import java.util.zip.ZipInputStream;

/* loaded from: classes.dex */
public final class h extends androidx.appcompat.widget.z {
    public static final d K = new d();
    public boolean E;
    public boolean F;
    public boolean G;
    public final HashSet H;
    public final HashSet I;
    public c0 J;

    /* renamed from: d, reason: collision with root package name */
    public final g f13733d;

    /* renamed from: e, reason: collision with root package name */
    public final g f13734e;

    /* renamed from: i, reason: collision with root package name */
    public y f13735i;

    /* renamed from: v, reason: collision with root package name */
    public int f13736v;

    /* renamed from: w, reason: collision with root package name */
    public final v f13737w;

    /* renamed from: x, reason: collision with root package name */
    public String f13738x;

    /* renamed from: y, reason: collision with root package name */
    public int f13739y;

    public h(ThemedReactContext themedReactContext) {
        super(themedReactContext);
        String string;
        this.f13733d = new g(this, 1);
        this.f13734e = new g(this, 0);
        this.f13736v = 0;
        v vVar = new v();
        this.f13737w = vVar;
        this.E = false;
        this.F = false;
        this.G = true;
        HashSet hashSet = new HashSet();
        this.H = hashSet;
        this.I = new HashSet();
        TypedArray obtainStyledAttributes = getContext().obtainStyledAttributes(null, e0.a, R.attr.lottieAnimationViewStyle, 0);
        this.G = obtainStyledAttributes.getBoolean(2, true);
        boolean hasValue = obtainStyledAttributes.hasValue(14);
        boolean hasValue2 = obtainStyledAttributes.hasValue(9);
        boolean hasValue3 = obtainStyledAttributes.hasValue(19);
        if (hasValue && hasValue2) {
            throw new IllegalArgumentException("lottie_rawRes and lottie_fileName cannot be used at the same time. Please use only one at once.");
        }
        if (hasValue) {
            int resourceId = obtainStyledAttributes.getResourceId(14, 0);
            if (resourceId != 0) {
                setAnimation(resourceId);
            }
        } else if (hasValue2) {
            String string2 = obtainStyledAttributes.getString(9);
            if (string2 != null) {
                setAnimation(string2);
            }
        } else if (hasValue3 && (string = obtainStyledAttributes.getString(19)) != null) {
            setAnimationFromUrl(string);
        }
        setFallbackResource(obtainStyledAttributes.getResourceId(8, 0));
        if (obtainStyledAttributes.getBoolean(1, false)) {
            this.F = true;
        }
        if (obtainStyledAttributes.getBoolean(12, false)) {
            vVar.f13789e.setRepeatCount(-1);
        }
        if (obtainStyledAttributes.hasValue(17)) {
            setRepeatMode(obtainStyledAttributes.getInt(17, 1));
        }
        if (obtainStyledAttributes.hasValue(16)) {
            setRepeatCount(obtainStyledAttributes.getInt(16, -1));
        }
        if (obtainStyledAttributes.hasValue(18)) {
            setSpeed(obtainStyledAttributes.getFloat(18, 1.0f));
        }
        if (obtainStyledAttributes.hasValue(4)) {
            setClipToCompositionBounds(obtainStyledAttributes.getBoolean(4, true));
        }
        if (obtainStyledAttributes.hasValue(3)) {
            setClipTextToBoundingBox(obtainStyledAttributes.getBoolean(3, false));
        }
        if (obtainStyledAttributes.hasValue(6)) {
            setDefaultFontFileExtension(obtainStyledAttributes.getString(6));
        }
        setImageAssetsFolder(obtainStyledAttributes.getString(11));
        boolean hasValue4 = obtainStyledAttributes.hasValue(13);
        float f2 = obtainStyledAttributes.getFloat(13, 0.0f);
        if (hasValue4) {
            hashSet.add(f.f13722e);
        }
        vVar.v(f2);
        d(obtainStyledAttributes.getBoolean(7, false));
        if (obtainStyledAttributes.hasValue(5)) {
            vVar.a(new q4.e("**"), z.F, new e4.e(new g0(y0.b.c(getContext(), obtainStyledAttributes.getResourceId(5, -1)).getDefaultColor())));
        }
        if (obtainStyledAttributes.hasValue(15)) {
            int i5 = obtainStyledAttributes.getInt(15, 0);
            setRenderMode(f0.values()[i5 >= f0.values().length ? 0 : i5]);
        }
        if (obtainStyledAttributes.hasValue(0)) {
            int i6 = obtainStyledAttributes.getInt(0, 0);
            setAsyncUpdates(a.values()[i6 >= f0.values().length ? 0 : i6]);
        }
        setIgnoreDisabledSystemAnimations(obtainStyledAttributes.getBoolean(10, false));
        if (obtainStyledAttributes.hasValue(20)) {
            setUseCompositionFrameRate(obtainStyledAttributes.getBoolean(20, false));
        }
        obtainStyledAttributes.recycle();
    }

    private void setCompositionTask(c0 c0Var) {
        a0 a0Var = c0Var.f13711d;
        v vVar = this.f13737w;
        if (a0Var != null && vVar == getDrawable() && vVar.f13787d == a0Var.a) {
            return;
        }
        this.H.add(f.f13721d);
        this.f13737w.d();
        a();
        c0Var.b(this.f13733d);
        c0Var.a(this.f13734e);
        this.J = c0Var;
    }

    public final void a() {
        c0 c0Var = this.J;
        if (c0Var != null) {
            g gVar = this.f13733d;
            synchronized (c0Var) {
                c0Var.a.remove(gVar);
            }
            c0 c0Var2 = this.J;
            g gVar2 = this.f13734e;
            synchronized (c0Var2) {
                c0Var2.f13709b.remove(gVar2);
            }
        }
    }

    public final void d(boolean z5) {
        v vVar = this.f13737w;
        HashSet hashSet = vVar.K.a;
        w wVar = w.f13805d;
        boolean add = z5 ? hashSet.add(wVar) : hashSet.remove(wVar);
        if (vVar.f13787d == null || !add) {
            return;
        }
        vVar.c();
    }

    public final void e(InputStream inputStream, String str) {
        setCompositionTask(m.a(str, new com.facebook.react.runtime.o(11, inputStream, str), new h1(18, inputStream)));
    }

    public final void f(ZipInputStream zipInputStream, String str) {
        setCompositionTask(m.a(str, new com.facebook.react.runtime.o(12, zipInputStream, str), new h1(19, zipInputStream)));
    }

    public final void g(String str, String str2) {
        setCompositionTask(m.a(str2, new j(getContext(), str, str2, 0), null));
    }

    public a getAsyncUpdates() {
        a aVar = this.f13737w.f13794i0;
        return aVar != null ? aVar : a.f13702d;
    }

    public boolean getAsyncUpdatesEnabled() {
        a aVar = this.f13737w.f13794i0;
        if (aVar == null) {
            aVar = a.f13702d;
        }
        return aVar == a.f13703e;
    }

    public boolean getClipTextToBoundingBox() {
        return this.f13737w.S;
    }

    public boolean getClipToCompositionBounds() {
        return this.f13737w.M;
    }

    public i getComposition() {
        Drawable drawable = getDrawable();
        v vVar = this.f13737w;
        if (drawable == vVar) {
            return vVar.f13787d;
        }
        return null;
    }

    public long getDuration() {
        i composition = getComposition();
        if (composition != null) {
            return (long) composition.b();
        }
        return 0L;
    }

    public int getFrame() {
        return (int) this.f13737w.f13789e.E;
    }

    public String getImageAssetsFolder() {
        return this.f13737w.E;
    }

    public boolean getMaintainOriginalImageBounds() {
        return this.f13737w.L;
    }

    public float getMaxFrame() {
        return this.f13737w.f13789e.e();
    }

    public float getMinFrame() {
        return this.f13737w.f13789e.f();
    }

    public d0 getPerformanceTracker() {
        i iVar = this.f13737w.f13787d;
        if (iVar != null) {
            return iVar.a;
        }
        return null;
    }

    public float getProgress() {
        return this.f13737w.f13789e.d();
    }

    public f0 getRenderMode() {
        return this.f13737w.U ? f0.f13730i : f0.f13729e;
    }

    public int getRepeatCount() {
        return this.f13737w.f13789e.getRepeatCount();
    }

    public int getRepeatMode() {
        return this.f13737w.f13789e.getRepeatMode();
    }

    public float getSpeed() {
        return this.f13737w.f13789e.f20280v;
    }

    @Override // android.view.View
    public final void invalidate() {
        super.invalidate();
        Drawable drawable = getDrawable();
        if (drawable instanceof v) {
            boolean z5 = ((v) drawable).U;
            f0 f0Var = f0.f13730i;
            if ((z5 ? f0Var : f0.f13729e) == f0Var) {
                this.f13737w.invalidateSelf();
            }
        }
    }

    @Override // android.widget.ImageView, android.view.View, android.graphics.drawable.Drawable.Callback
    public final void invalidateDrawable(Drawable drawable) {
        Drawable drawable2 = getDrawable();
        v vVar = this.f13737w;
        if (drawable2 == vVar) {
            super.invalidateDrawable(vVar);
        } else {
            super.invalidateDrawable(drawable);
        }
    }

    @Override // android.widget.ImageView, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (isInEditMode() || !this.F) {
            return;
        }
        this.f13737w.l();
    }

    @Override // android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        int i5;
        if (!(parcelable instanceof e)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        e eVar = (e) parcelable;
        super.onRestoreInstanceState(eVar.getSuperState());
        this.f13738x = eVar.f13714d;
        HashSet hashSet = this.H;
        f fVar = f.f13721d;
        if (!hashSet.contains(fVar) && !TextUtils.isEmpty(this.f13738x)) {
            setAnimation(this.f13738x);
        }
        this.f13739y = eVar.f13715e;
        if (!hashSet.contains(fVar) && (i5 = this.f13739y) != 0) {
            setAnimation(i5);
        }
        if (!hashSet.contains(f.f13722e)) {
            this.f13737w.v(eVar.f13716i);
        }
        if (!hashSet.contains(f.f13726x) && eVar.f13717v) {
            playAnimation();
        }
        if (!hashSet.contains(f.f13725w)) {
            setImageAssetsFolder(eVar.f13718w);
        }
        if (!hashSet.contains(f.f13723i)) {
            setRepeatMode(eVar.f13719x);
        }
        if (hashSet.contains(f.f13724v)) {
            return;
        }
        setRepeatCount(eVar.f13720y);
    }

    @Override // android.view.View
    public final Parcelable onSaveInstanceState() {
        boolean z5;
        e eVar = new e(super.onSaveInstanceState());
        eVar.f13714d = this.f13738x;
        eVar.f13715e = this.f13739y;
        v vVar = this.f13737w;
        x4.e eVar2 = vVar.f13789e;
        x4.e eVar3 = vVar.f13789e;
        eVar.f13716i = eVar2.d();
        if (vVar.isVisible()) {
            z5 = eVar3.J;
        } else {
            int i5 = vVar.f13800o0;
            z5 = i5 == 2 || i5 == 3;
        }
        eVar.f13717v = z5;
        eVar.f13718w = vVar.E;
        eVar.f13719x = eVar3.getRepeatMode();
        eVar.f13720y = eVar3.getRepeatCount();
        return eVar;
    }

    public final void playAnimation() {
        this.H.add(f.f13726x);
        this.f13737w.l();
    }

    public void setAnimation(final int i5) {
        c0 a;
        this.f13739y = i5;
        final String str = null;
        this.f13738x = null;
        if (isInEditMode()) {
            a = new c0(new f4.f(i5, 1, this), true);
        } else if (this.G) {
            Context context = getContext();
            final String j = m.j(context, i5);
            final WeakReference weakReference = new WeakReference(context);
            final Context applicationContext = context.getApplicationContext();
            a = m.a(j, new Callable() { // from class: l4.l
                @Override // java.util.concurrent.Callable
                public final Object call() {
                    Context context2 = (Context) weakReference.get();
                    if (context2 == null) {
                        context2 = applicationContext;
                    }
                    return m.e(context2, j, i5);
                }
            }, null);
        } else {
            Context context2 = getContext();
            HashMap hashMap = m.a;
            final WeakReference weakReference2 = new WeakReference(context2);
            final Context applicationContext2 = context2.getApplicationContext();
            a = m.a(null, new Callable() { // from class: l4.l
                @Override // java.util.concurrent.Callable
                public final Object call() {
                    Context context22 = (Context) weakReference2.get();
                    if (context22 == null) {
                        context22 = applicationContext2;
                    }
                    return m.e(context22, str, i5);
                }
            }, null);
        }
        setCompositionTask(a);
    }

    @Deprecated
    public void setAnimationFromJson(String str) {
        e(new ByteArrayInputStream(str.getBytes()), null);
    }

    public void setAnimationFromUrl(String str) {
        c0 a;
        int i5 = 0;
        String str2 = null;
        if (this.G) {
            Context context = getContext();
            HashMap hashMap = m.a;
            String k = a3.e.k("url_", str);
            a = m.a(k, new j(context, str, k, i5), null);
        } else {
            a = m.a(null, new j(getContext(), str, str2, i5), null);
        }
        setCompositionTask(a);
    }

    public void setApplyingOpacityToLayersEnabled(boolean z5) {
        this.f13737w.R = z5;
    }

    public void setAsyncUpdates(a aVar) {
        this.f13737w.f13794i0 = aVar;
    }

    public void setCacheComposition(boolean z5) {
        this.G = z5;
    }

    public void setClipTextToBoundingBox(boolean z5) {
        v vVar = this.f13737w;
        if (z5 != vVar.S) {
            vVar.S = z5;
            vVar.invalidateSelf();
        }
    }

    public void setClipToCompositionBounds(boolean z5) {
        v vVar = this.f13737w;
        if (z5 != vVar.M) {
            vVar.M = z5;
            t4.c cVar = vVar.N;
            if (cVar != null) {
                cVar.J = z5;
            }
            vVar.invalidateSelf();
        }
    }

    public void setComposition(@NonNull i iVar) {
        v vVar = this.f13737w;
        vVar.setCallback(this);
        boolean z5 = true;
        this.E = true;
        ArrayList arrayList = vVar.f13803x;
        x4.e eVar = vVar.f13789e;
        if (vVar.f13787d == iVar) {
            z5 = false;
        } else {
            vVar.h0 = true;
            vVar.d();
            vVar.f13787d = iVar;
            vVar.c();
            boolean z6 = eVar.I == null;
            eVar.I = iVar;
            if (z6) {
                eVar.k(Math.max(eVar.G, iVar.f13750l), Math.min(eVar.H, iVar.f13751m));
            } else {
                eVar.k((int) iVar.f13750l, (int) iVar.f13751m);
            }
            float f2 = eVar.E;
            eVar.E = 0.0f;
            eVar.f20283y = 0.0f;
            eVar.j((int) f2);
            eVar.c();
            vVar.v(eVar.getAnimatedFraction());
            Iterator it = new ArrayList(arrayList).iterator();
            while (it.hasNext()) {
                u uVar = (u) it.next();
                if (uVar != null) {
                    uVar.run();
                }
                it.remove();
            }
            arrayList.clear();
            iVar.a.a = vVar.P;
            vVar.e();
            Drawable.Callback callback = vVar.getCallback();
            if (callback instanceof ImageView) {
                ImageView imageView = (ImageView) callback;
                imageView.setImageDrawable(null);
                imageView.setImageDrawable(vVar);
            }
        }
        if (this.F) {
            vVar.l();
        }
        this.E = false;
        if (getDrawable() != vVar || z5) {
            if (!z5) {
                boolean j = vVar.j();
                setImageDrawable(null);
                setImageDrawable(vVar);
                if (j) {
                    vVar.n();
                }
            }
            onVisibilityChanged(this, getVisibility());
            requestLayout();
            Iterator it2 = this.I.iterator();
            while (it2.hasNext()) {
                LottieAnimationViewManager.createViewInstance$lambda$1(((k4.b) it2.next()).a, iVar);
            }
        }
    }

    public void setDefaultFontFileExtension(String str) {
        v vVar = this.f13737w;
        vVar.H = str;
        androidx.appcompat.widget.w i5 = vVar.i();
        if (i5 != null) {
            i5.f1146x = str;
        }
    }

    public void setFailureListener(y yVar) {
        this.f13735i = yVar;
    }

    public void setFallbackResource(int i5) {
        this.f13736v = i5;
    }

    public void setFontAssetDelegate(b bVar) {
        v vVar = this.f13737w;
        vVar.I = bVar;
        androidx.appcompat.widget.w wVar = vVar.F;
        if (wVar != null) {
            wVar.f1145w = bVar;
        }
    }

    public void setFontMap(Map<String, Typeface> map) {
        v vVar = this.f13737w;
        if (map == vVar.G) {
            return;
        }
        vVar.G = map;
        vVar.invalidateSelf();
    }

    public void setFrame(int i5) {
        this.f13737w.o(i5);
    }

    @Deprecated
    public void setIgnoreDisabledSystemAnimations(boolean z5) {
        this.f13737w.f13801v = z5;
    }

    public void setImageAssetDelegate(c cVar) {
        p4.a aVar = this.f13737w.f13804y;
    }

    public void setImageAssetsFolder(String str) {
        this.f13737w.E = str;
    }

    @Override // androidx.appcompat.widget.z, android.widget.ImageView
    public void setImageBitmap(Bitmap bitmap) {
        this.f13739y = 0;
        this.f13738x = null;
        a();
        super.setImageBitmap(bitmap);
    }

    @Override // androidx.appcompat.widget.z, android.widget.ImageView
    public void setImageDrawable(Drawable drawable) {
        this.f13739y = 0;
        this.f13738x = null;
        a();
        super.setImageDrawable(drawable);
    }

    @Override // androidx.appcompat.widget.z, android.widget.ImageView
    public void setImageResource(int i5) {
        this.f13739y = 0;
        this.f13738x = null;
        a();
        super.setImageResource(i5);
    }

    public void setMaintainOriginalImageBounds(boolean z5) {
        this.f13737w.L = z5;
    }

    public void setMaxFrame(int i5) {
        this.f13737w.p(i5);
    }

    public void setMaxProgress(float f2) {
        v vVar = this.f13737w;
        i iVar = vVar.f13787d;
        if (iVar == null) {
            vVar.f13803x.add(new r(vVar, f2, 0));
            return;
        }
        x4.e eVar = vVar.f13789e;
        eVar.k(eVar.G, x4.g.e(iVar.f13750l, iVar.f13751m, f2));
    }

    public void setMinAndMaxFrame(String str) {
        this.f13737w.s(str);
    }

    public void setMinFrame(int i5) {
        this.f13737w.t(i5);
    }

    public void setMinProgress(float f2) {
        v vVar = this.f13737w;
        i iVar = vVar.f13787d;
        if (iVar == null) {
            vVar.f13803x.add(new r(vVar, f2, 1));
        } else {
            vVar.t((int) x4.g.e(iVar.f13750l, iVar.f13751m, f2));
        }
    }

    public void setOutlineMasksAndMattes(boolean z5) {
        v vVar = this.f13737w;
        if (vVar.Q == z5) {
            return;
        }
        vVar.Q = z5;
        t4.c cVar = vVar.N;
        if (cVar != null) {
            cVar.r(z5);
        }
    }

    public void setPerformanceTrackingEnabled(boolean z5) {
        v vVar = this.f13737w;
        vVar.P = z5;
        i iVar = vVar.f13787d;
        if (iVar != null) {
            iVar.a.a = z5;
        }
    }

    public void setProgress(float f2) {
        this.H.add(f.f13722e);
        this.f13737w.v(f2);
    }

    public void setRenderMode(f0 f0Var) {
        v vVar = this.f13737w;
        vVar.T = f0Var;
        vVar.e();
    }

    public void setRepeatCount(int i5) {
        this.H.add(f.f13724v);
        this.f13737w.f13789e.setRepeatCount(i5);
    }

    public void setRepeatMode(int i5) {
        this.H.add(f.f13723i);
        this.f13737w.f13789e.setRepeatMode(i5);
    }

    public void setSafeMode(boolean z5) {
        this.f13737w.f13802w = z5;
    }

    public void setSpeed(float f2) {
        this.f13737w.f13789e.f20280v = f2;
    }

    public void setTextDelegate(h0 h0Var) {
        this.f13737w.J = h0Var;
    }

    public void setUseCompositionFrameRate(boolean z5) {
        this.f13737w.f13789e.K = z5;
    }

    @Override // android.view.View
    public final void unscheduleDrawable(Drawable drawable) {
        v vVar;
        if (!this.E && drawable == (vVar = this.f13737w) && vVar.j()) {
            this.F = false;
            vVar.k();
        } else if (!this.E && (drawable instanceof v)) {
            v vVar2 = (v) drawable;
            if (vVar2.j()) {
                vVar2.k();
            }
        }
        super.unscheduleDrawable(drawable);
    }

    public void setMaxFrame(String str) {
        this.f13737w.q(str);
    }

    public void setMinFrame(String str) {
        this.f13737w.u(str);
    }

    public void setAnimation(String str) {
        c0 a;
        this.f13738x = str;
        this.f13739y = 0;
        int i5 = 1;
        if (isInEditMode()) {
            a = new c0(new com.facebook.react.runtime.o(10, this, str), true);
        } else {
            String str2 = null;
            if (this.G) {
                Context context = getContext();
                HashMap hashMap = m.a;
                String k = a3.e.k("asset_", str);
                a = m.a(k, new j(context.getApplicationContext(), str, k, i5), null);
            } else {
                Context context2 = getContext();
                HashMap hashMap2 = m.a;
                a = m.a(null, new j(context2.getApplicationContext(), str, str2, i5), null);
            }
        }
        setCompositionTask(a);
    }
}
