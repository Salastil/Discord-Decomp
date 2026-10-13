package i;

import android.os.Bundle;
import android.util.TypedValue;
import android.view.ContextThemeWrapper;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import androidx.activity.ComponentDialog;
import androidx.appcompat.app.AppCompatDelegate;
import androidx.appcompat.view.ActionMode;
import com.discord.R;

/* loaded from: classes.dex */
public abstract class z extends ComponentDialog implements i {

    /* renamed from: v, reason: collision with root package name */
    public androidx.appcompat.app.a f10376v;

    /* renamed from: w, reason: collision with root package name */
    public final y f10377w;

    /* JADX WARN: Illegal instructions before constructor call */
    /* JADX WARN: Type inference failed for: r2v2, types: [i.y] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public z(ContextThemeWrapper contextThemeWrapper, int i5) {
        super(contextThemeWrapper, r2);
        int i6;
        if (i5 == 0) {
            TypedValue typedValue = new TypedValue();
            contextThemeWrapper.getTheme().resolveAttribute(R.attr.dialogTheme, typedValue, true);
            i6 = typedValue.resourceId;
        } else {
            i6 = i5;
        }
        this.f10377w = new androidx.core.view.j() { // from class: i.y
            @Override // androidx.core.view.j
            public final boolean superDispatchKeyEvent(KeyEvent keyEvent) {
                return z.this.d(keyEvent);
            }
        };
        AppCompatDelegate c6 = c();
        if (i5 == 0) {
            TypedValue typedValue2 = new TypedValue();
            contextThemeWrapper.getTheme().resolveAttribute(R.attr.dialogTheme, typedValue2, true);
            i5 = typedValue2.resourceId;
        }
        ((androidx.appcompat.app.a) c6).f781q0 = i5;
        c6.o();
    }

    @Override // androidx.activity.ComponentDialog, android.app.Dialog
    public final void addContentView(View view, ViewGroup.LayoutParams layoutParams) {
        b();
        c().a(view, layoutParams);
    }

    public final AppCompatDelegate c() {
        if (this.f10376v == null) {
            f4.l lVar = AppCompatDelegate.f760d;
            this.f10376v = new androidx.appcompat.app.a(getContext(), getWindow(), this, this);
        }
        return this.f10376v;
    }

    public final boolean d(KeyEvent keyEvent) {
        return super.dispatchKeyEvent(keyEvent);
    }

    @Override // android.app.Dialog, android.content.DialogInterface
    public final void dismiss() {
        super.dismiss();
        c().p();
    }

    @Override // android.app.Dialog, android.view.Window.Callback
    public final boolean dispatchKeyEvent(KeyEvent keyEvent) {
        return ta.a.t(this.f10377w, getWindow().getDecorView(), this, keyEvent);
    }

    @Override // android.app.Dialog
    public final View findViewById(int i5) {
        return c().d(i5);
    }

    @Override // android.app.Dialog
    public final void invalidateOptionsMenu() {
        c().l();
    }

    @Override // androidx.activity.ComponentDialog, android.app.Dialog
    public void onCreate(Bundle bundle) {
        c().k();
        super.onCreate(bundle);
        c().o();
    }

    @Override // androidx.activity.ComponentDialog, android.app.Dialog
    public final void onStop() {
        super.onStop();
        c().t();
    }

    @Override // i.i
    public final ActionMode onWindowStartingSupportActionMode(ActionMode.Callback callback) {
        return null;
    }

    @Override // androidx.activity.ComponentDialog, android.app.Dialog
    public void setContentView(int i5) {
        b();
        c().x(i5);
    }

    @Override // android.app.Dialog
    public void setTitle(CharSequence charSequence) {
        super.setTitle(charSequence);
        c().D(charSequence);
    }

    @Override // androidx.activity.ComponentDialog, android.app.Dialog
    public void setContentView(View view) {
        b();
        c().y(view);
    }

    @Override // android.app.Dialog
    public final void setTitle(int i5) {
        super.setTitle(i5);
        c().D(getContext().getString(i5));
    }

    @Override // androidx.activity.ComponentDialog, android.app.Dialog
    public void setContentView(View view, ViewGroup.LayoutParams layoutParams) {
        b();
        c().z(view, layoutParams);
    }

    @Override // i.i
    public final void onSupportActionModeFinished(ActionMode actionMode) {
    }

    @Override // i.i
    public final void onSupportActionModeStarted(ActionMode actionMode) {
    }
}
