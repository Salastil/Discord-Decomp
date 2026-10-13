package i;

import android.R;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.drawable.Drawable;
import android.view.ContextThemeWrapper;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.appcompat.app.AlertController$RecycleListView;

/* loaded from: classes.dex */
public class e {
    public final b a;

    /* renamed from: b, reason: collision with root package name */
    public final int f10302b;

    public e(Context context) {
        this(context, f.e(context, 0));
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r8v1, types: [android.widget.ListAdapter] */
    /* JADX WARN: Type inference failed for: r8v3 */
    /* JADX WARN: Type inference failed for: r8v4 */
    @NonNull
    public f create() {
        b bVar = this.a;
        f fVar = new f(bVar.a, this.f10302b);
        View view = bVar.f10258e;
        d dVar = fVar.f10310x;
        if (view != null) {
            dVar.f10297w = view;
        } else {
            CharSequence charSequence = bVar.f10257d;
            if (charSequence != null) {
                dVar.f10280d = charSequence;
                TextView textView = dVar.f10295u;
                if (textView != null) {
                    textView.setText(charSequence);
                }
            }
            Drawable drawable = bVar.f10256c;
            if (drawable != null) {
                dVar.f10293s = drawable;
                ImageView imageView = dVar.f10294t;
                if (imageView != null) {
                    imageView.setVisibility(0);
                    dVar.f10294t.setImageDrawable(drawable);
                }
            }
        }
        String str = bVar.f10259f;
        if (str != null) {
            dVar.f10281e = str;
            TextView textView2 = dVar.f10296v;
            if (textView2 != null) {
                textView2.setText(str);
            }
        }
        CharSequence charSequence2 = bVar.f10260g;
        if (charSequence2 != null) {
            dVar.c(-1, charSequence2, bVar.f10261h);
        }
        CharSequence charSequence3 = bVar.f10262i;
        if (charSequence3 != null) {
            dVar.c(-2, charSequence3, bVar.j);
        }
        String str2 = bVar.k;
        if (str2 != null) {
            dVar.c(-3, str2, bVar.f10263l);
        }
        if (bVar.f10265n != null || bVar.f10266o != null) {
            AlertController$RecycleListView alertController$RecycleListView = (AlertController$RecycleListView) bVar.f10255b.inflate(dVar.A, (ViewGroup) null);
            int i5 = bVar.f10269r ? dVar.B : dVar.C;
            Object obj = bVar.f10266o;
            ?? r82 = obj;
            if (obj == null) {
                r82 = new c(bVar.a, i5, R.id.text1, bVar.f10265n);
            }
            dVar.f10298x = r82;
            dVar.f10299y = bVar.f10270s;
            if (bVar.f10267p != null) {
                alertController$RecycleListView.setOnItemClickListener(new a(bVar, dVar));
            }
            if (bVar.f10269r) {
                alertController$RecycleListView.setChoiceMode(1);
            }
            dVar.f10282f = alertController$RecycleListView;
        }
        View view2 = bVar.f10268q;
        if (view2 != null) {
            dVar.f10283g = view2;
            dVar.f10284h = false;
        }
        fVar.setCancelable(true);
        fVar.setCanceledOnTouchOutside(true);
        fVar.setOnCancelListener(null);
        fVar.setOnDismissListener(null);
        n.k kVar = bVar.f10264m;
        if (kVar != null) {
            fVar.setOnKeyListener(kVar);
        }
        return fVar;
    }

    @NonNull
    public Context getContext() {
        return this.a.a;
    }

    public e setNegativeButton(int i5, DialogInterface.OnClickListener onClickListener) {
        b bVar = this.a;
        bVar.f10262i = bVar.a.getText(i5);
        bVar.j = onClickListener;
        return this;
    }

    public e setPositiveButton(int i5, DialogInterface.OnClickListener onClickListener) {
        b bVar = this.a;
        bVar.f10260g = bVar.a.getText(i5);
        bVar.f10261h = onClickListener;
        return this;
    }

    public e setTitle(CharSequence charSequence) {
        this.a.f10257d = charSequence;
        return this;
    }

    public e setView(View view) {
        this.a.f10268q = view;
        return this;
    }

    public e(@NonNull Context context, int i5) {
        this.a = new b(new ContextThemeWrapper(context, f.e(context, i5)));
        this.f10302b = i5;
    }
}
