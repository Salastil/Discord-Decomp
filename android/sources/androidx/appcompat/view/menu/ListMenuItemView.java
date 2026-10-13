package androidx.appcompat.view.menu;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.widget.AbsListView;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RadioButton;
import android.widget.TextView;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.R;
import com.discord.key_commands.KeyCommandDescriptor;
import e4.m;
import h.a;
import n.j;
import n.l;
import n.w;

/* loaded from: classes.dex */
public class ListMenuItemView extends LinearLayout implements w, AbsListView.SelectionBoundsAdjuster {
    public ImageView E;
    public LinearLayout F;
    public final Drawable G;
    public final int H;
    public final Context I;
    public boolean J;
    public final Drawable K;
    public final boolean L;
    public LayoutInflater M;
    public boolean N;

    /* renamed from: d, reason: collision with root package name */
    public l f815d;

    /* renamed from: e, reason: collision with root package name */
    public ImageView f816e;

    /* renamed from: i, reason: collision with root package name */
    public RadioButton f817i;

    /* renamed from: v, reason: collision with root package name */
    public TextView f818v;

    /* renamed from: w, reason: collision with root package name */
    public CheckBox f819w;

    /* renamed from: x, reason: collision with root package name */
    public TextView f820x;

    /* renamed from: y, reason: collision with root package name */
    public ImageView f821y;

    public ListMenuItemView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        m b02 = m.b0(getContext(), attributeSet, a.f9460r, R.attr.listMenuViewStyle);
        this.G = b02.U(5);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        this.H = typedArray.getResourceId(1, -1);
        this.J = typedArray.getBoolean(7, false);
        this.I = context;
        this.K = b02.U(8);
        TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(null, new int[]{android.R.attr.divider}, R.attr.dropDownListViewStyle, 0);
        this.L = obtainStyledAttributes.hasValue(0);
        b02.e0();
        obtainStyledAttributes.recycle();
    }

    private LayoutInflater getInflater() {
        if (this.M == null) {
            this.M = LayoutInflater.from(getContext());
        }
        return this.M;
    }

    private void setSubMenuArrowVisible(boolean z5) {
        ImageView imageView = this.f821y;
        if (imageView != null) {
            imageView.setVisibility(z5 ? 0 : 8);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:20:0x0055, code lost:
    
        if (r0 == false) goto L28;
     */
    /* JADX WARN: Removed duplicated region for block: B:13:0x003b  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x011b  */
    @Override // n.w
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(l lVar) {
        boolean z5;
        String sb2;
        boolean z6;
        this.f815d = lVar;
        boolean isVisible = lVar.isVisible();
        j jVar = lVar.f14681n;
        int i5 = 0;
        setVisibility(isVisible ? 0 : 8);
        setTitle(lVar.f14674e);
        setCheckable(lVar.isCheckable());
        if (jVar.o()) {
            if ((jVar.n() ? lVar.j : lVar.f14677h) != 0) {
                z5 = true;
                jVar.n();
                if (z5) {
                    l lVar2 = this.f815d;
                    j jVar2 = lVar2.f14681n;
                    if (jVar2.o()) {
                        if ((jVar2.n() ? lVar2.j : lVar2.f14677h) != 0) {
                            z6 = true;
                        }
                    }
                    z6 = false;
                }
                i5 = 8;
                if (i5 == 0) {
                    TextView textView = this.f820x;
                    l lVar3 = this.f815d;
                    j jVar3 = lVar3.f14681n;
                    Context context = jVar3.a;
                    char c6 = jVar3.n() ? lVar3.j : lVar3.f14677h;
                    if (c6 == 0) {
                        sb2 = "";
                    } else {
                        Resources resources = context.getResources();
                        StringBuilder sb3 = new StringBuilder();
                        if (ViewConfiguration.get(context).hasPermanentMenuKey()) {
                            sb3.append(resources.getString(R.string.abc_prepend_shortcut_label));
                        }
                        int i6 = jVar3.n() ? lVar3.k : lVar3.f14678i;
                        l.c(sb3, i6, KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT, resources.getString(R.string.abc_menu_meta_shortcut_label));
                        l.c(sb3, i6, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, resources.getString(R.string.abc_menu_ctrl_shortcut_label));
                        l.c(sb3, i6, 2, resources.getString(R.string.abc_menu_alt_shortcut_label));
                        l.c(sb3, i6, 1, resources.getString(R.string.abc_menu_shift_shortcut_label));
                        l.c(sb3, i6, 4, resources.getString(R.string.abc_menu_sym_shortcut_label));
                        l.c(sb3, i6, 8, resources.getString(R.string.abc_menu_function_shortcut_label));
                        if (c6 == '\b') {
                            sb3.append(resources.getString(R.string.abc_menu_delete_shortcut_label));
                        } else if (c6 == '\n') {
                            sb3.append(resources.getString(R.string.abc_menu_enter_shortcut_label));
                        } else if (c6 != ' ') {
                            sb3.append(c6);
                        } else {
                            sb3.append(resources.getString(R.string.abc_menu_space_shortcut_label));
                        }
                        sb2 = sb3.toString();
                    }
                    textView.setText(sb2);
                }
                if (this.f820x.getVisibility() != i5) {
                    this.f820x.setVisibility(i5);
                }
                setIcon(lVar.getIcon());
                setEnabled(lVar.isEnabled());
                setSubMenuArrowVisible(lVar.hasSubMenu());
                setContentDescription(lVar.f14684q);
            }
        }
        z5 = false;
        jVar.n();
        if (z5) {
        }
        i5 = 8;
        if (i5 == 0) {
        }
        if (this.f820x.getVisibility() != i5) {
        }
        setIcon(lVar.getIcon());
        setEnabled(lVar.isEnabled());
        setSubMenuArrowVisible(lVar.hasSubMenu());
        setContentDescription(lVar.f14684q);
    }

    @Override // android.widget.AbsListView.SelectionBoundsAdjuster
    public final void adjustListItemSelectionBounds(Rect rect) {
        ImageView imageView = this.E;
        if (imageView == null || imageView.getVisibility() != 0) {
            return;
        }
        LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) this.E.getLayoutParams();
        rect.top = this.E.getHeight() + layoutParams.topMargin + layoutParams.bottomMargin + rect.top;
    }

    @Override // n.w
    public l getItemData() {
        return this.f815d;
    }

    @Override // android.view.View
    public final void onFinishInflate() {
        super.onFinishInflate();
        setBackground(this.G);
        TextView textView = (TextView) findViewById(R.id.title);
        this.f818v = textView;
        int i5 = this.H;
        if (i5 != -1) {
            textView.setTextAppearance(this.I, i5);
        }
        this.f820x = (TextView) findViewById(R.id.shortcut);
        ImageView imageView = (ImageView) findViewById(R.id.submenuarrow);
        this.f821y = imageView;
        if (imageView != null) {
            imageView.setImageDrawable(this.K);
        }
        this.E = (ImageView) findViewById(R.id.group_divider);
        this.F = (LinearLayout) findViewById(R.id.content);
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        if (this.f816e != null && this.J) {
            ViewGroup.LayoutParams layoutParams = getLayoutParams();
            LinearLayout.LayoutParams layoutParams2 = (LinearLayout.LayoutParams) this.f816e.getLayoutParams();
            int i10 = layoutParams.height;
            if (i10 > 0 && layoutParams2.width <= 0) {
                layoutParams2.width = i10;
            }
        }
        super.onMeasure(i5, i6);
    }

    public void setCheckable(boolean z5) {
        CompoundButton compoundButton;
        View view;
        if (!z5 && this.f817i == null && this.f819w == null) {
            return;
        }
        if ((this.f815d.f14691x & 4) != 0) {
            if (this.f817i == null) {
                RadioButton radioButton = (RadioButton) getInflater().inflate(R.layout.abc_list_menu_item_radio, (ViewGroup) this, false);
                this.f817i = radioButton;
                LinearLayout linearLayout = this.F;
                if (linearLayout != null) {
                    linearLayout.addView(radioButton, -1);
                } else {
                    addView(radioButton, -1);
                }
            }
            compoundButton = this.f817i;
            view = this.f819w;
        } else {
            if (this.f819w == null) {
                CheckBox checkBox = (CheckBox) getInflater().inflate(R.layout.abc_list_menu_item_checkbox, (ViewGroup) this, false);
                this.f819w = checkBox;
                LinearLayout linearLayout2 = this.F;
                if (linearLayout2 != null) {
                    linearLayout2.addView(checkBox, -1);
                } else {
                    addView(checkBox, -1);
                }
            }
            compoundButton = this.f819w;
            view = this.f817i;
        }
        if (z5) {
            compoundButton.setChecked(this.f815d.isChecked());
            if (compoundButton.getVisibility() != 0) {
                compoundButton.setVisibility(0);
            }
            if (view == null || view.getVisibility() == 8) {
                return;
            }
            view.setVisibility(8);
            return;
        }
        CheckBox checkBox2 = this.f819w;
        if (checkBox2 != null) {
            checkBox2.setVisibility(8);
        }
        RadioButton radioButton2 = this.f817i;
        if (radioButton2 != null) {
            radioButton2.setVisibility(8);
        }
    }

    public void setChecked(boolean z5) {
        CompoundButton compoundButton;
        if ((this.f815d.f14691x & 4) != 0) {
            if (this.f817i == null) {
                RadioButton radioButton = (RadioButton) getInflater().inflate(R.layout.abc_list_menu_item_radio, (ViewGroup) this, false);
                this.f817i = radioButton;
                LinearLayout linearLayout = this.F;
                if (linearLayout != null) {
                    linearLayout.addView(radioButton, -1);
                } else {
                    addView(radioButton, -1);
                }
            }
            compoundButton = this.f817i;
        } else {
            if (this.f819w == null) {
                CheckBox checkBox = (CheckBox) getInflater().inflate(R.layout.abc_list_menu_item_checkbox, (ViewGroup) this, false);
                this.f819w = checkBox;
                LinearLayout linearLayout2 = this.F;
                if (linearLayout2 != null) {
                    linearLayout2.addView(checkBox, -1);
                } else {
                    addView(checkBox, -1);
                }
            }
            compoundButton = this.f819w;
        }
        compoundButton.setChecked(z5);
    }

    public void setForceShowIcon(boolean z5) {
        this.N = z5;
        this.J = z5;
    }

    public void setGroupDividerEnabled(boolean z5) {
        ImageView imageView = this.E;
        if (imageView != null) {
            imageView.setVisibility((this.L || !z5) ? 8 : 0);
        }
    }

    public void setIcon(Drawable drawable) {
        j jVar = this.f815d.f14681n;
        boolean z5 = this.N;
        if (z5 || this.J) {
            ImageView imageView = this.f816e;
            if (imageView == null && drawable == null && !this.J) {
                return;
            }
            if (imageView == null) {
                ImageView imageView2 = (ImageView) getInflater().inflate(R.layout.abc_list_menu_item_icon, (ViewGroup) this, false);
                this.f816e = imageView2;
                LinearLayout linearLayout = this.F;
                if (linearLayout != null) {
                    linearLayout.addView(imageView2, 0);
                } else {
                    addView(imageView2, 0);
                }
            }
            if (drawable == null && !this.J) {
                this.f816e.setVisibility(8);
                return;
            }
            ImageView imageView3 = this.f816e;
            if (!z5) {
                drawable = null;
            }
            imageView3.setImageDrawable(drawable);
            if (this.f816e.getVisibility() != 0) {
                this.f816e.setVisibility(0);
            }
        }
    }

    public void setTitle(CharSequence charSequence) {
        if (charSequence == null) {
            if (this.f818v.getVisibility() != 8) {
                this.f818v.setVisibility(8);
            }
        } else {
            this.f818v.setText(charSequence);
            if (this.f818v.getVisibility() != 0) {
                this.f818v.setVisibility(0);
            }
        }
    }
}
