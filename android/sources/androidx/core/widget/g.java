package androidx.core.widget;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.text.Editable;
import android.view.ActionMode;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class g implements ActionMode.Callback {
    public final ActionMode.Callback a;

    /* renamed from: b, reason: collision with root package name */
    public final TextView f1682b;

    /* renamed from: c, reason: collision with root package name */
    public Class f1683c;

    /* renamed from: d, reason: collision with root package name */
    public Method f1684d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f1685e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f1686f = false;

    public g(ActionMode.Callback callback, TextView textView) {
        this.a = callback;
        this.f1682b = textView;
    }

    @Override // android.view.ActionMode.Callback
    public final boolean onActionItemClicked(ActionMode actionMode, MenuItem menuItem) {
        return this.a.onActionItemClicked(actionMode, menuItem);
    }

    @Override // android.view.ActionMode.Callback
    public final boolean onCreateActionMode(ActionMode actionMode, Menu menu) {
        return this.a.onCreateActionMode(actionMode, menu);
    }

    @Override // android.view.ActionMode.Callback
    public final void onDestroyActionMode(ActionMode actionMode) {
        this.a.onDestroyActionMode(actionMode);
    }

    @Override // android.view.ActionMode.Callback
    public final boolean onPrepareActionMode(ActionMode actionMode, Menu menu) {
        TextView textView = this.f1682b;
        Context context = textView.getContext();
        PackageManager packageManager = context.getPackageManager();
        boolean z5 = this.f1686f;
        Class cls = Integer.TYPE;
        if (!z5) {
            this.f1686f = true;
            try {
                Class<?> cls2 = Class.forName("com.android.internal.view.menu.MenuBuilder");
                this.f1683c = cls2;
                this.f1684d = cls2.getDeclaredMethod("removeItemAt", cls);
                this.f1685e = true;
            } catch (ClassNotFoundException | NoSuchMethodException unused) {
                this.f1683c = null;
                this.f1684d = null;
                this.f1685e = false;
            }
        }
        try {
            Method declaredMethod = (this.f1685e && this.f1683c.isInstance(menu)) ? this.f1684d : menu.getClass().getDeclaredMethod("removeItemAt", cls);
            for (int size = menu.size() - 1; size >= 0; size--) {
                MenuItem item = menu.getItem(size);
                if (item.getIntent() != null && "android.intent.action.PROCESS_TEXT".equals(item.getIntent().getAction())) {
                    declaredMethod.invoke(menu, Integer.valueOf(size));
                }
            }
            ArrayList arrayList = new ArrayList();
            if (context instanceof Activity) {
                for (ResolveInfo resolveInfo : packageManager.queryIntentActivities(new Intent().setAction("android.intent.action.PROCESS_TEXT").setType("text/plain"), 0)) {
                    if (!context.getPackageName().equals(resolveInfo.activityInfo.packageName)) {
                        ActivityInfo activityInfo = resolveInfo.activityInfo;
                        if (activityInfo.exported) {
                            String str = activityInfo.permission;
                            if (str != null && context.checkSelfPermission(str) != 0) {
                            }
                        }
                    }
                    arrayList.add(resolveInfo);
                }
            }
            for (int i5 = 0; i5 < arrayList.size(); i5++) {
                ResolveInfo resolveInfo2 = (ResolveInfo) arrayList.get(i5);
                MenuItem add = menu.add(0, 0, i5 + 100, resolveInfo2.loadLabel(packageManager));
                Intent putExtra = new Intent().setAction("android.intent.action.PROCESS_TEXT").setType("text/plain").putExtra("android.intent.extra.PROCESS_TEXT_READONLY", !((textView instanceof Editable) && textView.onCheckIsTextEditor() && textView.isEnabled()));
                ActivityInfo activityInfo2 = resolveInfo2.activityInfo;
                add.setIntent(putExtra.setClassName(activityInfo2.packageName, activityInfo2.name)).setShowAsAction(1);
            }
        } catch (IllegalAccessException | NoSuchMethodException | InvocationTargetException unused2) {
        }
        return this.a.onPrepareActionMode(actionMode, menu);
    }
}
