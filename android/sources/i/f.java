package i;

import android.content.Context;
import android.content.DialogInterface;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.TypedValue;
import android.view.ContextThemeWrapper;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.TextView;
import androidx.appcompat.app.AlertController$RecycleListView;
import androidx.appcompat.widget.x1;
import androidx.core.view.k0;
import androidx.core.view.s0;
import androidx.core.widget.NestedScrollView;
import com.discord.R;
import com.discord.key_commands.KeyCommandDescriptor;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class f extends z implements DialogInterface {

    /* renamed from: x, reason: collision with root package name */
    public final d f10310x;

    public f(ContextThemeWrapper contextThemeWrapper, int i5) {
        super(contextThemeWrapper, e(contextThemeWrapper, i5));
        this.f10310x = new d(getContext(), this, getWindow());
    }

    public static int e(Context context, int i5) {
        if (((i5 >>> 24) & 255) >= 1) {
            return i5;
        }
        TypedValue typedValue = new TypedValue();
        context.getTheme().resolveAttribute(R.attr.alertDialogTheme, typedValue, true);
        return typedValue.resourceId;
    }

    @Override // i.z, androidx.activity.ComponentDialog, android.app.Dialog
    public final void onCreate(Bundle bundle) {
        int i5;
        ListAdapter listAdapter;
        View findViewById;
        super.onCreate(bundle);
        d dVar = this.f10310x;
        dVar.f10278b.setContentView(dVar.f10300z);
        Context context = dVar.a;
        Window window = dVar.f10279c;
        View findViewById2 = window.findViewById(R.id.parentPanel);
        View findViewById3 = findViewById2.findViewById(R.id.topPanel);
        View findViewById4 = findViewById2.findViewById(R.id.contentPanel);
        View findViewById5 = findViewById2.findViewById(R.id.buttonPanel);
        ViewGroup viewGroup = (ViewGroup) findViewById2.findViewById(R.id.customPanel);
        View view = dVar.f10283g;
        if (view == null) {
            view = null;
        }
        boolean z5 = view != null;
        if (!z5 || !d.a(view)) {
            window.setFlags(KeyCommandDescriptor.ModifierFlags.SHIFT, KeyCommandDescriptor.ModifierFlags.SHIFT);
        }
        if (z5) {
            FrameLayout frameLayout = (FrameLayout) window.findViewById(R.id.custom);
            frameLayout.addView(view, new ViewGroup.LayoutParams(-1, -1));
            if (dVar.f10284h) {
                frameLayout.setPadding(0, 0, 0, 0);
            }
            if (dVar.f10282f != null) {
                ((LinearLayout.LayoutParams) ((x1) viewGroup.getLayoutParams())).weight = 0.0f;
            }
        } else {
            viewGroup.setVisibility(8);
        }
        View findViewById6 = viewGroup.findViewById(R.id.topPanel);
        View findViewById7 = viewGroup.findViewById(R.id.contentPanel);
        View findViewById8 = viewGroup.findViewById(R.id.buttonPanel);
        ViewGroup b10 = d.b(findViewById6, findViewById3);
        ViewGroup b11 = d.b(findViewById7, findViewById4);
        ViewGroup b12 = d.b(findViewById8, findViewById5);
        NestedScrollView nestedScrollView = (NestedScrollView) window.findViewById(R.id.scrollView);
        dVar.f10292r = nestedScrollView;
        nestedScrollView.setFocusable(false);
        dVar.f10292r.setNestedScrollingEnabled(false);
        TextView textView = (TextView) b11.findViewById(android.R.id.message);
        dVar.f10296v = textView;
        if (textView != null) {
            String str = dVar.f10281e;
            if (str != null) {
                textView.setText(str);
            } else {
                textView.setVisibility(8);
                dVar.f10292r.removeView(dVar.f10296v);
                if (dVar.f10282f != null) {
                    ViewGroup viewGroup2 = (ViewGroup) dVar.f10292r.getParent();
                    int indexOfChild = viewGroup2.indexOfChild(dVar.f10292r);
                    viewGroup2.removeViewAt(indexOfChild);
                    viewGroup2.addView(dVar.f10282f, indexOfChild, new ViewGroup.LayoutParams(-1, -1));
                } else {
                    b11.setVisibility(8);
                }
            }
        }
        Button button = (Button) b12.findViewById(android.R.id.button1);
        dVar.f10285i = button;
        androidx.appcompat.widget.b bVar = dVar.F;
        button.setOnClickListener(bVar);
        if (TextUtils.isEmpty(dVar.j)) {
            dVar.f10285i.setVisibility(8);
            i5 = 0;
        } else {
            dVar.f10285i.setText(dVar.j);
            dVar.f10285i.setVisibility(0);
            i5 = 1;
        }
        Button button2 = (Button) b12.findViewById(android.R.id.button2);
        dVar.f10286l = button2;
        button2.setOnClickListener(bVar);
        if (TextUtils.isEmpty(dVar.f10287m)) {
            dVar.f10286l.setVisibility(8);
        } else {
            dVar.f10286l.setText(dVar.f10287m);
            dVar.f10286l.setVisibility(0);
            i5 |= 2;
        }
        Button button3 = (Button) b12.findViewById(android.R.id.button3);
        dVar.f10289o = button3;
        button3.setOnClickListener(bVar);
        if (TextUtils.isEmpty(dVar.f10290p)) {
            dVar.f10289o.setVisibility(8);
        } else {
            dVar.f10289o.setText(dVar.f10290p);
            dVar.f10289o.setVisibility(0);
            i5 |= 4;
        }
        TypedValue typedValue = new TypedValue();
        context.getTheme().resolveAttribute(R.attr.alertDialogCenterButtons, typedValue, true);
        if (typedValue.data != 0) {
            if (i5 == 1) {
                Button button4 = dVar.f10285i;
                LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) button4.getLayoutParams();
                layoutParams.gravity = 1;
                layoutParams.weight = 0.5f;
                button4.setLayoutParams(layoutParams);
            } else if (i5 == 2) {
                Button button5 = dVar.f10286l;
                LinearLayout.LayoutParams layoutParams2 = (LinearLayout.LayoutParams) button5.getLayoutParams();
                layoutParams2.gravity = 1;
                layoutParams2.weight = 0.5f;
                button5.setLayoutParams(layoutParams2);
            } else if (i5 == 4) {
                Button button6 = dVar.f10289o;
                LinearLayout.LayoutParams layoutParams3 = (LinearLayout.LayoutParams) button6.getLayoutParams();
                layoutParams3.gravity = 1;
                layoutParams3.weight = 0.5f;
                button6.setLayoutParams(layoutParams3);
            }
        }
        if (i5 == 0) {
            b12.setVisibility(8);
        }
        if (dVar.f10297w != null) {
            b10.addView(dVar.f10297w, 0, new ViewGroup.LayoutParams(-1, -2));
            window.findViewById(R.id.title_template).setVisibility(8);
        } else {
            dVar.f10294t = (ImageView) window.findViewById(android.R.id.icon);
            if (TextUtils.isEmpty(dVar.f10280d) || !dVar.D) {
                window.findViewById(R.id.title_template).setVisibility(8);
                dVar.f10294t.setVisibility(8);
                b10.setVisibility(8);
            } else {
                TextView textView2 = (TextView) window.findViewById(R.id.alertTitle);
                dVar.f10295u = textView2;
                textView2.setText(dVar.f10280d);
                Drawable drawable = dVar.f10293s;
                if (drawable != null) {
                    dVar.f10294t.setImageDrawable(drawable);
                } else {
                    dVar.f10295u.setPadding(dVar.f10294t.getPaddingLeft(), dVar.f10294t.getPaddingTop(), dVar.f10294t.getPaddingRight(), dVar.f10294t.getPaddingBottom());
                    dVar.f10294t.setVisibility(8);
                }
            }
        }
        boolean z6 = viewGroup.getVisibility() != 8;
        int i6 = (b10 == null || b10.getVisibility() == 8) ? 0 : 1;
        boolean z7 = b12.getVisibility() != 8;
        if (!z7 && (findViewById = b11.findViewById(R.id.textSpacerNoButtons)) != null) {
            findViewById.setVisibility(0);
        }
        if (i6 != 0) {
            NestedScrollView nestedScrollView2 = dVar.f10292r;
            if (nestedScrollView2 != null) {
                nestedScrollView2.setClipToPadding(true);
            }
            View findViewById9 = (dVar.f10281e == null && dVar.f10282f == null) ? null : b10.findViewById(R.id.titleDividerNoCustom);
            if (findViewById9 != null) {
                findViewById9.setVisibility(0);
            }
        } else {
            View findViewById10 = b11.findViewById(R.id.textSpacerNoTitle);
            if (findViewById10 != null) {
                findViewById10.setVisibility(0);
            }
        }
        AlertController$RecycleListView alertController$RecycleListView = dVar.f10282f;
        if (alertController$RecycleListView != null && (!z7 || i6 == 0)) {
            alertController$RecycleListView.setPadding(alertController$RecycleListView.getPaddingLeft(), i6 != 0 ? alertController$RecycleListView.getPaddingTop() : alertController$RecycleListView.f758d, alertController$RecycleListView.getPaddingRight(), z7 ? alertController$RecycleListView.getPaddingBottom() : alertController$RecycleListView.f759e);
        }
        if (!z6) {
            View view2 = dVar.f10282f;
            if (view2 == null) {
                view2 = dVar.f10292r;
            }
            if (view2 != null) {
                int i10 = z7 ? 2 : 0;
                View findViewById11 = window.findViewById(R.id.scrollIndicatorUp);
                View findViewById12 = window.findViewById(R.id.scrollIndicatorDown);
                WeakHashMap weakHashMap = s0.a;
                k0.b(view2, i6 | i10, 3);
                if (findViewById11 != null) {
                    b11.removeView(findViewById11);
                }
                if (findViewById12 != null) {
                    b11.removeView(findViewById12);
                }
            }
        }
        AlertController$RecycleListView alertController$RecycleListView2 = dVar.f10282f;
        if (alertController$RecycleListView2 == null || (listAdapter = dVar.f10298x) == null) {
            return;
        }
        alertController$RecycleListView2.setAdapter(listAdapter);
        int i11 = dVar.f10299y;
        if (i11 > -1) {
            alertController$RecycleListView2.setItemChecked(i11, true);
            alertController$RecycleListView2.setSelection(i11);
        }
    }

    @Override // android.app.Dialog, android.view.KeyEvent.Callback
    public final boolean onKeyDown(int i5, KeyEvent keyEvent) {
        NestedScrollView nestedScrollView = this.f10310x.f10292r;
        if (nestedScrollView == null || !nestedScrollView.executeKeyEvent(keyEvent)) {
            return super.onKeyDown(i5, keyEvent);
        }
        return true;
    }

    @Override // android.app.Dialog, android.view.KeyEvent.Callback
    public final boolean onKeyUp(int i5, KeyEvent keyEvent) {
        NestedScrollView nestedScrollView = this.f10310x.f10292r;
        if (nestedScrollView == null || !nestedScrollView.executeKeyEvent(keyEvent)) {
            return super.onKeyUp(i5, keyEvent);
        }
        return true;
    }

    @Override // i.z, android.app.Dialog
    public final void setTitle(CharSequence charSequence) {
        super.setTitle(charSequence);
        d dVar = this.f10310x;
        dVar.f10280d = charSequence;
        TextView textView = dVar.f10295u;
        if (textView != null) {
            textView.setText(charSequence);
        }
    }
}
