package androidx.appcompat.view;

import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.AssetManager;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Build;
import android.view.LayoutInflater;
import com.discord.R;

/* loaded from: classes.dex */
public final class ContextThemeWrapper extends ContextWrapper {

    /* renamed from: f, reason: collision with root package name */
    public static Configuration f793f;
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public Resources.Theme f794b;

    /* renamed from: c, reason: collision with root package name */
    public LayoutInflater f795c;

    /* renamed from: d, reason: collision with root package name */
    public Configuration f796d;

    /* renamed from: e, reason: collision with root package name */
    public Resources f797e;

    public ContextThemeWrapper(Context context, int i5) {
        super(context);
        this.a = i5;
    }

    public final void a(Configuration configuration) {
        if (this.f797e != null) {
            throw new IllegalStateException("getResources() or getAssets() has already been called");
        }
        if (this.f796d != null) {
            throw new IllegalStateException("Override configuration has already been set");
        }
        this.f796d = new Configuration(configuration);
    }

    @Override // android.content.ContextWrapper
    public final void attachBaseContext(Context context) {
        super.attachBaseContext(context);
    }

    public final void b() {
        if (this.f794b == null) {
            this.f794b = getResources().newTheme();
            Resources.Theme theme = getBaseContext().getTheme();
            if (theme != null) {
                this.f794b.setTo(theme);
            }
        }
        this.f794b.applyStyle(this.a, true);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final AssetManager getAssets() {
        return getResources().getAssets();
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0022, code lost:
    
        if (r0.equals(androidx.appcompat.view.ContextThemeWrapper.f793f) != false) goto L15;
     */
    @Override // android.content.ContextWrapper, android.content.Context
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Resources getResources() {
        if (this.f797e == null) {
            Configuration configuration = this.f796d;
            if (configuration != null) {
                if (Build.VERSION.SDK_INT >= 26) {
                    if (f793f == null) {
                        Configuration configuration2 = new Configuration();
                        configuration2.fontScale = 0.0f;
                        f793f = configuration2;
                    }
                }
                this.f797e = createConfigurationContext(this.f796d).getResources();
            }
            this.f797e = super.getResources();
        }
        return this.f797e;
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Object getSystemService(String str) {
        if (!"layout_inflater".equals(str)) {
            return getBaseContext().getSystemService(str);
        }
        if (this.f795c == null) {
            this.f795c = LayoutInflater.from(getBaseContext()).cloneInContext(this);
        }
        return this.f795c;
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final Resources.Theme getTheme() {
        Resources.Theme theme = this.f794b;
        if (theme != null) {
            return theme;
        }
        if (this.a == 0) {
            this.a = R.style.Theme_AppCompat_Light;
        }
        b();
        return this.f794b;
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public final void setTheme(int i5) {
        if (this.a != i5) {
            this.a = i5;
            b();
        }
    }
}
