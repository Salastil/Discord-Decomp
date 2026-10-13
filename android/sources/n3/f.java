package n3;

import android.animation.Animator;
import android.animation.AnimatorInflater;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.AnimatedVectorDrawable;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import java.util.ArrayList;
import org.xmlpull.v1.XmlPullParser;

/* loaded from: classes.dex */
public final class f extends g implements Animatable {

    /* renamed from: i, reason: collision with root package name */
    public final Context f14786i;

    /* renamed from: v, reason: collision with root package name */
    public androidx.appcompat.widget.c f14787v = null;

    /* renamed from: w, reason: collision with root package name */
    public ArrayList f14788w = null;

    /* renamed from: x, reason: collision with root package name */
    public final k9.b f14789x = new k9.b(1, this);

    /* renamed from: e, reason: collision with root package name */
    public final c f14785e = new c();

    public f(Context context, int i5) {
        this.f14786i = context;
    }

    @Override // n3.g, android.graphics.drawable.Drawable
    public final void applyTheme(Resources.Theme theme) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.applyTheme(theme);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean canApplyTheme() {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            return drawable.canApplyTheme();
        }
        return false;
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.draw(canvas);
            return;
        }
        c cVar = this.f14785e;
        cVar.a.draw(canvas);
        if (cVar.f14782b.isStarted()) {
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getAlpha() : this.f14785e.a.getAlpha();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getChangingConfigurations() {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            return drawable.getChangingConfigurations();
        }
        int changingConfigurations = super.getChangingConfigurations();
        this.f14785e.getClass();
        return changingConfigurations;
    }

    @Override // android.graphics.drawable.Drawable
    public final ColorFilter getColorFilter() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getColorFilter() : this.f14785e.a.getColorFilter();
    }

    @Override // android.graphics.drawable.Drawable
    public final Drawable.ConstantState getConstantState() {
        if (this.f14790d != null) {
            return new d(this.f14790d.getConstantState());
        }
        return null;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getIntrinsicHeight() : this.f14785e.a.getIntrinsicHeight();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getIntrinsicWidth() : this.f14785e.a.getIntrinsicWidth();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getOpacity() : this.f14785e.a.getOpacity();
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x00c0, code lost:
    
        if (r3.f14782b != null) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x00c2, code lost:
    
        r3.f14782b = new android.animation.AnimatorSet();
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x00c9, code lost:
    
        r3.f14782b.playTogether(r3.f14783c);
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x00d0, code lost:
    
        return;
     */
    @Override // android.graphics.drawable.Drawable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void inflate(Resources resources, XmlPullParser xmlPullParser, AttributeSet attributeSet, Resources.Theme theme) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.inflate(resources, xmlPullParser, attributeSet, theme);
            return;
        }
        int eventType = xmlPullParser.getEventType();
        int depth = xmlPullParser.getDepth() + 1;
        while (true) {
            c cVar = this.f14785e;
            if (eventType == 1 || (xmlPullParser.getDepth() < depth && eventType == 3)) {
                break;
            }
            if (eventType == 2) {
                String name = xmlPullParser.getName();
                if ("animated-vector".equals(name)) {
                    TypedArray f2 = a1.b.f(resources, theme, attributeSet, a.f14780e);
                    int resourceId = f2.getResourceId(0, 0);
                    if (resourceId != 0) {
                        p pVar = new p();
                        ThreadLocal threadLocal = a1.n.a;
                        pVar.f14790d = resources.getDrawable(resourceId, theme);
                        pVar.f14836x = false;
                        pVar.setCallback(this.f14789x);
                        p pVar2 = cVar.a;
                        if (pVar2 != null) {
                            pVar2.setCallback(null);
                        }
                        cVar.a = pVar;
                    }
                    f2.recycle();
                } else if ("target".equals(name)) {
                    TypedArray obtainAttributes = resources.obtainAttributes(attributeSet, a.f14781f);
                    String string = obtainAttributes.getString(0);
                    int resourceId2 = obtainAttributes.getResourceId(1, 0);
                    if (resourceId2 != 0) {
                        Context context = this.f14786i;
                        if (context == null) {
                            obtainAttributes.recycle();
                            throw new IllegalStateException("Context can't be null when inflating animators");
                        }
                        Animator loadAnimator = AnimatorInflater.loadAnimator(context, resourceId2);
                        loadAnimator.setTarget(cVar.a.f14832e.f14823b.f14822o.get(string));
                        if (cVar.f14783c == null) {
                            cVar.f14783c = new ArrayList();
                            cVar.f14784d = new s.e(0);
                        }
                        cVar.f14783c.add(loadAnimator);
                        cVar.f14784d.put(loadAnimator, string);
                    }
                    obtainAttributes.recycle();
                } else {
                    continue;
                }
            }
            eventType = xmlPullParser.next();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean isAutoMirrored() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.isAutoMirrored() : this.f14785e.a.isAutoMirrored();
    }

    @Override // android.graphics.drawable.Animatable
    public final boolean isRunning() {
        Drawable drawable = this.f14790d;
        return drawable != null ? ((AnimatedVectorDrawable) drawable).isRunning() : this.f14785e.f14782b.isRunning();
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean isStateful() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.isStateful() : this.f14785e.a.isStateful();
    }

    @Override // android.graphics.drawable.Drawable
    public final Drawable mutate() {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.mutate();
        }
        return this;
    }

    @Override // android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect rect) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setBounds(rect);
        } else {
            this.f14785e.a.setBounds(rect);
        }
    }

    @Override // n3.g, android.graphics.drawable.Drawable
    public final boolean onLevelChange(int i5) {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.setLevel(i5) : this.f14785e.a.setLevel(i5);
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean onStateChange(int[] iArr) {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.setState(iArr) : this.f14785e.a.setState(iArr);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setAlpha(i5);
        } else {
            this.f14785e.a.setAlpha(i5);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAutoMirrored(boolean z5) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setAutoMirrored(z5);
        } else {
            this.f14785e.a.setAutoMirrored(z5);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setColorFilter(colorFilter);
        } else {
            this.f14785e.a.setColorFilter(colorFilter);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setTint(int i5) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            jb.a.J(drawable, i5);
        } else {
            this.f14785e.a.setTint(i5);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setTintList(ColorStateList colorStateList) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setTintList(colorStateList);
        } else {
            this.f14785e.a.setTintList(colorStateList);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setTintMode(PorterDuff.Mode mode) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setTintMode(mode);
        } else {
            this.f14785e.a.setTintMode(mode);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean setVisible(boolean z5, boolean z6) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            return drawable.setVisible(z5, z6);
        }
        this.f14785e.a.setVisible(z5, z6);
        return super.setVisible(z5, z6);
    }

    @Override // android.graphics.drawable.Animatable
    public final void start() {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            ((AnimatedVectorDrawable) drawable).start();
            return;
        }
        c cVar = this.f14785e;
        if (cVar.f14782b.isStarted()) {
            return;
        }
        cVar.f14782b.start();
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Animatable
    public final void stop() {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            ((AnimatedVectorDrawable) drawable).stop();
        } else {
            this.f14785e.f14782b.end();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void inflate(Resources resources, XmlPullParser xmlPullParser, AttributeSet attributeSet) {
        inflate(resources, xmlPullParser, attributeSet, null);
    }
}
