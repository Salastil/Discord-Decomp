package ym;

import android.R;
import android.content.res.ColorStateList;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.SubMenu;
import androidx.appcompat.view.ContextThemeWrapper;
import bn.i;
import bn.l;
import bn.n;
import bn.q;
import bn.r;
import com.google.android.material.appbar.MaterialToolbar;
import io.sentry.android.core.w;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e {
    public final ContextThemeWrapper a;

    public e(ContextThemeWrapper wrappedContext) {
        Intrinsics.checkNotNullParameter(wrappedContext, "wrappedContext");
        this.a = wrappedContext;
    }

    public static void a(MaterialToolbar materialToolbar, Menu menu, bn.e eVar, Map map, Map map2) {
        Integer num;
        int i5 = 0;
        for (Object obj : eVar.f3058b) {
            int i6 = i5 + 1;
            if (i5 < 0) {
                c0.k();
                throw null;
            }
            bn.h hVar = (bn.h) obj;
            Object obj2 = map.get(hVar.getItem().a);
            if (obj2 == null) {
                throw new IllegalArgumentException(("[RNScreens] Invalid forwardIdMap received. Missing item: " + hVar.getItem() + ".").toString());
            }
            int intValue = ((Number) obj2).intValue();
            String str = hVar.getItem().f3089n;
            int intValue2 = (str == null || (num = (Integer) map2.get(str)) == null) ? 0 : num.intValue();
            if (hVar instanceof bn.f) {
                MenuItem add = menu.add(intValue2, intValue, i5, (CharSequence) null);
                Intrinsics.checkNotNull(add);
                n nVar = ((bn.f) hVar).a;
                b(materialToolbar, add, h(nVar));
                r rVar = nVar.f3090o;
                String str2 = nVar.a;
                String str3 = nVar.f3089n;
                int ordinal = rVar.ordinal();
                if (ordinal != 0) {
                    if (ordinal != 1) {
                        if (ordinal != 2) {
                            throw new fo.n();
                        }
                        if (str3 == null) {
                        }
                    } else if (str3 == null) {
                        throw new IllegalArgumentException(s4.h.f("[RNScreens] Menu item '", str2, "' has itemType=TOGGLE but no groupId. Toggle items must belong to a group.").toString());
                    }
                    add.setCheckable(true);
                    add.setChecked(nVar.f3091p);
                } else if (str3 != null) {
                    throw new IllegalArgumentException(s4.h.f("[RNScreens] Menu item '", str2, "' has itemType=ACTION and belongs to a group. Action items cannot belong to groups.").toString());
                }
            } else {
                if (!(hVar instanceof bn.g)) {
                    throw new fo.n();
                }
                SubMenu addSubMenu = menu.addSubMenu(intValue2, intValue, i5, (CharSequence) null);
                MenuItem item = addSubMenu.getItem();
                Intrinsics.checkNotNullExpressionValue(item, "getItem(...)");
                bn.g gVar = (bn.g) hVar;
                b(materialToolbar, item, h(gVar.a));
                String str4 = gVar.f3060c;
                if (str4 != null) {
                    addSubMenu.setHeaderTitle(str4);
                }
                Intrinsics.checkNotNull(addSubMenu);
                a(materialToolbar, addSubMenu, gVar.f3059b, map, map2);
            }
            i5 = i6;
        }
        for (l lVar : eVar.a) {
            Integer num2 = (Integer) map2.get(lVar.a);
            if (num2 != null) {
                menu.setGroupCheckable(num2.intValue(), true, lVar.f3075b);
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:121:0x01aa, code lost:
    
        if (r5 != r13.intValue()) goto L130;
     */
    /* JADX WARN: Code restructure failed: missing block: B:134:0x0179, code lost:
    
        if (r5 != r13.intValue()) goto L115;
     */
    /* JADX WARN: Code restructure failed: missing block: B:147:0x0140, code lost:
    
        if (r14 != r13.intValue()) goto L99;
     */
    /* JADX WARN: Removed duplicated region for block: B:101:0x01f4  */
    /* JADX WARN: Removed duplicated region for block: B:104:0x020a  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x021f  */
    /* JADX WARN: Removed duplicated region for block: B:107:0x0226  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x021c  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x0186  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x01b8  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x01cc  */
    /* JADX WARN: Removed duplicated region for block: B:99:0x01e0  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void b(MaterialToolbar materialToolbar, MenuItem menuItem, i iVar) {
        Integer num;
        Integer num2;
        Integer g6;
        int i5;
        Integer g10;
        bn.d dVar = iVar.a;
        bn.d dVar2 = iVar.f3069l;
        bn.d dVar3 = iVar.k;
        bn.d dVar4 = iVar.j;
        bn.d dVar5 = iVar.f3068i;
        bn.d dVar6 = iVar.f3067h;
        if (dVar != null) {
            menuItem.setTitle((CharSequence) android.support.v4.media.session.b.F(dVar));
        }
        bn.d dVar7 = iVar.f3061b;
        if (dVar7 != null) {
            menuItem.setTitleCondensed((CharSequence) android.support.v4.media.session.b.F(dVar7));
        }
        bn.d dVar8 = iVar.f3062c;
        if (dVar8 != null) {
            CharSequence charSequence = (CharSequence) android.support.v4.media.session.b.F(dVar8);
            if (menuItem instanceof d1.a) {
                ((d1.a) menuItem).setTooltipText(charSequence);
            } else if (Build.VERSION.SDK_INT >= 26) {
                jf.a.q(menuItem, charSequence);
            }
        }
        bn.d dVar9 = iVar.f3063d;
        if (dVar9 != null) {
            CharSequence charSequence2 = (CharSequence) android.support.v4.media.session.b.F(dVar9);
            if (menuItem instanceof d1.a) {
                ((d1.a) menuItem).setContentDescription(charSequence2);
            } else if (Build.VERSION.SDK_INT >= 26) {
                jf.a.l(menuItem, charSequence2);
            }
        }
        int i6 = 1;
        if (iVar.f3064e != null) {
            menuItem.setVisible(!r2.booleanValue());
        }
        if (iVar.f3065f != null) {
            menuItem.setEnabled(!r2.booleanValue());
        }
        q qVar = iVar.f3066g;
        if (qVar != null) {
            int ordinal = qVar.ordinal();
            if (ordinal == 0) {
                i6 = 2;
            } else if (ordinal == 1) {
                i6 = 6;
            } else if (ordinal != 2) {
                if (ordinal == 3) {
                    i6 = 5;
                } else {
                    if (ordinal != 4) {
                        throw new fo.n();
                    }
                    i6 = 0;
                }
            }
            menuItem.setShowAsAction(i6);
        }
        bn.b bVar = bn.b.a;
        if (dVar6 != null) {
            if (Intrinsics.areEqual(dVar6, bVar)) {
                menuItem.setIcon((Drawable) null);
            } else {
                if (!(dVar6 instanceof bn.c)) {
                    throw new fo.n();
                }
                menuItem.setIcon(e4.f.y(materialToolbar, (Drawable) ((bn.c) dVar6).a));
            }
        }
        if (dVar5 != null || dVar4 != null || dVar3 != null || dVar2 != null || dVar6 != null) {
            boolean z5 = menuItem instanceof d1.a;
            ColorStateList iconTintList = z5 ? ((d1.a) menuItem).getIconTintList() : Build.VERSION.SDK_INT >= 26 ? jf.a.f(menuItem) : null;
            Integer g11 = iconTintList != null ? g(iconTintList, new int[]{R.attr.state_enabled}) : null;
            if (Intrinsics.areEqual(dVar5, bVar)) {
                num = null;
            } else if (dVar5 instanceof bn.c) {
                num = (Integer) ((bn.c) dVar5).a;
            } else {
                if (dVar5 != null) {
                    throw new fo.n();
                }
                num = g11;
            }
            if (Intrinsics.areEqual(dVar2, bVar)) {
                num2 = null;
            } else if (dVar2 instanceof bn.c) {
                num2 = (Integer) ((bn.c) dVar2).a;
            } else {
                if (dVar2 != null) {
                    throw new fo.n();
                }
                if (iconTintList != null && (num2 = g(iconTintList, new int[]{-16842910})) != null) {
                    int intValue = num2.intValue();
                    if (g11 != null) {
                    }
                }
                num2 = null;
            }
            if (!Intrinsics.areEqual(dVar4, bVar)) {
                if (dVar4 instanceof bn.c) {
                    g6 = (Integer) ((bn.c) dVar4).a;
                    i5 = 16842919;
                } else {
                    if (dVar4 != null) {
                        throw new fo.n();
                    }
                    if (iconTintList != null && (g6 = g(iconTintList, new int[]{R.attr.state_enabled, R.attr.state_pressed})) != null) {
                        int intValue2 = g6.intValue();
                        i5 = 16842919;
                        if (g11 != null) {
                        }
                    }
                }
                if (!Intrinsics.areEqual(dVar3, bVar)) {
                    if (dVar3 instanceof bn.c) {
                        g10 = (Integer) ((bn.c) dVar3).a;
                    } else {
                        if (dVar3 != null) {
                            throw new fo.n();
                        }
                        if (iconTintList != null && (g10 = g(iconTintList, new int[]{R.attr.state_enabled, R.attr.state_focused})) != null) {
                            int intValue3 = g10.intValue();
                            if (g11 != null) {
                            }
                        }
                    }
                    ArrayList arrayList = new ArrayList();
                    ArrayList arrayList2 = new ArrayList();
                    if (num2 != null) {
                        int intValue4 = num2.intValue();
                        arrayList.add(new int[]{-16842910});
                        arrayList2.add(Integer.valueOf(intValue4));
                    }
                    if (g6 != null) {
                        int intValue5 = g6.intValue();
                        arrayList.add(new int[]{i5});
                        arrayList2.add(Integer.valueOf(intValue5));
                    }
                    if (g10 != null) {
                        int intValue6 = g10.intValue();
                        arrayList.add(new int[]{R.attr.state_focused});
                        arrayList2.add(Integer.valueOf(intValue6));
                    }
                    if (num != null) {
                        int intValue7 = num.intValue();
                        arrayList.add(new int[0]);
                        arrayList2.add(Integer.valueOf(intValue7));
                    }
                    ColorStateList colorStateList = !arrayList.isEmpty() ? new ColorStateList((int[][]) arrayList.toArray(new int[0][]), CollectionsKt.h0(arrayList2)) : null;
                    if (z5) {
                        ((d1.a) menuItem).setIconTintList(colorStateList);
                    } else if (Build.VERSION.SDK_INT >= 26) {
                        jf.a.n(menuItem, colorStateList);
                    }
                }
                g10 = null;
                ArrayList arrayList3 = new ArrayList();
                ArrayList arrayList22 = new ArrayList();
                if (num2 != null) {
                }
                if (g6 != null) {
                }
                if (g10 != null) {
                }
                if (num != null) {
                }
                if (!arrayList3.isEmpty()) {
                }
                if (z5) {
                }
            }
            i5 = 16842919;
            g6 = null;
            if (!Intrinsics.areEqual(dVar3, bVar)) {
            }
            g10 = null;
            ArrayList arrayList32 = new ArrayList();
            ArrayList arrayList222 = new ArrayList();
            if (num2 != null) {
            }
            if (g6 != null) {
            }
            if (g10 != null) {
            }
            if (num != null) {
            }
            if (!arrayList32.isEmpty()) {
            }
            if (z5) {
            }
        }
        bn.d dVar10 = iVar.f3071n;
        if (dVar10 != null) {
            SubMenu subMenu = menuItem.getSubMenu();
            if (subMenu == null) {
                Log.w("StackHeaderApplicator", "[RNScreens] menuTitle ignored: target is not a submenu.");
                return;
            }
            subMenu.clearHeader();
            CharSequence charSequence3 = (String) android.support.v4.media.session.b.F(dVar10);
            if (charSequence3 == null) {
                charSequence3 = menuItem.getTitle();
            }
            subMenu.setHeaderTitle(charSequence3);
        }
    }

    public static void c(List list, LinkedHashMap linkedHashMap, LinkedHashMap linkedHashMap2, d dVar) {
        Iterator it = list.iterator();
        while (it.hasNext()) {
            bn.h hVar = (bn.h) it.next();
            if (linkedHashMap.containsKey(hVar.getItem().a)) {
                throw new IllegalArgumentException(s4.h.f("[RNScreens] Duplicate toolbar menu item id: '", hVar.getItem().a, "'. Item IDs must be unique across the entire menu.").toString());
            }
            int intValue = ((Number) dVar.invoke()).intValue();
            linkedHashMap.put(hVar.getItem().a, Integer.valueOf(intValue));
            linkedHashMap2.put(Integer.valueOf(intValue), hVar.getItem().a);
            if (hVar instanceof bn.g) {
                c(((bn.g) hVar).f3059b.f3058b, linkedHashMap, linkedHashMap2, dVar);
            }
        }
    }

    public static void d(bn.e eVar, LinkedHashMap linkedHashMap, d dVar) {
        Iterator it = eVar.a.iterator();
        while (it.hasNext()) {
            String str = ((l) it.next()).a;
            if (linkedHashMap.containsKey(str)) {
                throw new IllegalArgumentException(s4.h.f("[RNScreens] Duplicate toolbar menu group id: '", str, "'. Group IDs must be unique across the entire menu.").toString());
            }
            linkedHashMap.put(str, dVar.invoke());
        }
        for (bn.h hVar : eVar.f3058b) {
            if (hVar instanceof bn.g) {
                d(((bn.g) hVar).f3059b, linkedHashMap, dVar);
            }
        }
    }

    public static void e(bn.e eVar, LinkedHashMap linkedHashMap, LinkedHashMap linkedHashMap2, LinkedHashMap linkedHashMap3) {
        List list = eVar.a;
        ArrayList arrayList = new ArrayList(d0.l(list, 10));
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(((l) it.next()).a);
        }
        Set l02 = CollectionsKt.l0(arrayList);
        for (l lVar : eVar.a) {
            linkedHashMap2.put(lVar.a, Boolean.valueOf(lVar.f3075b));
            String str = lVar.a;
            if (linkedHashMap3.get(str) == null) {
                linkedHashMap3.put(str, new ArrayList());
            }
        }
        for (bn.h hVar : eVar.f3058b) {
            String str2 = hVar.getItem().f3089n;
            if (str2 != null) {
                if (!l02.contains(str2)) {
                    throw new IllegalArgumentException(s4.h.g("[RNScreens] Menu item '", hVar.getItem().a, "' references group '", str2, "' which is not defined at the same menu level. Groups cannot span submenus.").toString());
                }
                linkedHashMap.put(hVar.getItem().a, str2);
                Object obj = linkedHashMap3.get(str2);
                Intrinsics.checkNotNull(obj);
                ((List) obj).add(hVar.getItem().a);
            }
            if (hVar instanceof bn.g) {
                e(((bn.g) hVar).f3059b, linkedHashMap, linkedHashMap2, linkedHashMap3);
            }
        }
    }

    public static void f(MaterialToolbar toolbar, bn.e menuConfig, Map forwardIdMap, Map reverseIdMap, Map forwardGroupIdMap, boolean z5, com.discord.chat.presentation.message.i onItemClicked) {
        Intrinsics.checkNotNullParameter(toolbar, "toolbar");
        Intrinsics.checkNotNullParameter(menuConfig, "menuConfig");
        Intrinsics.checkNotNullParameter(forwardIdMap, "forwardIdMap");
        Intrinsics.checkNotNullParameter(reverseIdMap, "reverseIdMap");
        Intrinsics.checkNotNullParameter(forwardGroupIdMap, "forwardGroupIdMap");
        Intrinsics.checkNotNullParameter(onItemClicked, "onItemClicked");
        toolbar.getMenu().clear();
        Menu menu = toolbar.getMenu();
        Intrinsics.checkNotNullExpressionValue(menu, "getMenu(...)");
        a(toolbar, menu, menuConfig, forwardIdMap, forwardGroupIdMap);
        if (Build.VERSION.SDK_INT >= 28) {
            toolbar.getMenu().setGroupDividerEnabled(z5);
        }
        toolbar.setOnMenuItemClickListener(new w(10, reverseIdMap, onItemClicked));
    }

    public static Integer g(ColorStateList colorStateList, int[] iArr) {
        int colorForState = colorStateList.getColorForState(iArr, 1);
        if (colorForState == colorStateList.getColorForState(iArr, 2)) {
            return Integer.valueOf(colorForState);
        }
        return null;
    }

    public static i h(n nVar) {
        return new i(bn.a.a(nVar.f3079b), bn.a.a(nVar.f3080c), bn.a.a(nVar.f3081d), bn.a.a(nVar.f3082e), Boolean.valueOf(nVar.f3083f), Boolean.valueOf(nVar.f3084g), nVar.f3085h, bn.a.a(nVar.f3086i), bn.a.a(nVar.j), bn.a.a(nVar.k), bn.a.a(nVar.f3087l), bn.a.a(nVar.f3088m), null, null);
    }

    public static void i(bn.e menuConfig) {
        Intrinsics.checkNotNullParameter(menuConfig, "menuConfig");
        List<l> list = menuConfig.a;
        List<bn.h> list2 = menuConfig.f3058b;
        for (l lVar : list) {
            boolean z5 = lVar.f3075b;
            String str = lVar.a;
            if (z5) {
                int i5 = 0;
                for (bn.h hVar : list2) {
                    if (Intrinsics.areEqual(hVar.getItem().f3089n, str) && hVar.getItem().f3091p) {
                        i5++;
                    }
                }
                if (i5 > 1) {
                    throw new IllegalArgumentException(("[RNScreens] Radio group '" + str + "' has " + i5 + " items with initialToggleState=true. At most 1 is allowed for single-selection groups.").toString());
                }
            }
        }
        for (bn.h hVar2 : list2) {
            if (hVar2 instanceof bn.g) {
                i(((bn.g) hVar2).f3059b);
            }
        }
    }
}
