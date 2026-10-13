package androidx.recyclerview.widget;

import androidx.core.util.Pools$SimplePool;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class AdapterHelper {

    /* renamed from: d, reason: collision with root package name */
    public final a1 f2253d;
    public final Pools$SimplePool a = new Pools$SimplePool(30);

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f2251b = new ArrayList();

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f2252c = new ArrayList();

    /* renamed from: f, reason: collision with root package name */
    public int f2255f = 0;

    /* renamed from: e, reason: collision with root package name */
    public final q0 f2254e = new q0(this);

    public AdapterHelper(a1 a1Var) {
        this.f2253d = a1Var;
    }

    public final boolean a(int i5) {
        ArrayList arrayList = this.f2252c;
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            a aVar = (a) arrayList.get(i6);
            int i10 = aVar.a;
            if (i10 != 8) {
                if (i10 == 1) {
                    int i11 = aVar.f2355b;
                    int i12 = aVar.f2357d + i11;
                    while (i11 < i12) {
                        if (f(i11, i6 + 1) == i5) {
                            return true;
                        }
                        i11++;
                    }
                } else {
                    continue;
                }
            } else {
                if (f(aVar.f2357d, i6 + 1) == i5) {
                    return true;
                }
            }
        }
        return false;
    }

    public final void b() {
        ArrayList arrayList = this.f2252c;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            this.f2253d.a((a) arrayList.get(i5));
        }
        k(arrayList);
        this.f2255f = 0;
    }

    public final void c() {
        b();
        ArrayList arrayList = this.f2251b;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            a aVar = (a) arrayList.get(i5);
            int i6 = aVar.a;
            a1 a1Var = this.f2253d;
            if (i6 == 1) {
                a1Var.a(aVar);
                int i10 = aVar.f2355b;
                int i11 = aVar.f2357d;
                RecyclerView recyclerView = a1Var.a;
                recyclerView.offsetPositionRecordsForInsert(i10, i11);
                recyclerView.mItemsAddedOrRemoved = true;
            } else if (i6 == 2) {
                a1Var.a(aVar);
                int i12 = aVar.f2355b;
                int i13 = aVar.f2357d;
                RecyclerView recyclerView2 = a1Var.a;
                recyclerView2.offsetPositionRecordsForRemove(i12, i13, true);
                recyclerView2.mItemsAddedOrRemoved = true;
                recyclerView2.mState.f2328c += i13;
            } else if (i6 == 4) {
                a1Var.a(aVar);
                int i14 = aVar.f2355b;
                int i15 = aVar.f2357d;
                Object obj = aVar.f2356c;
                RecyclerView recyclerView3 = a1Var.a;
                recyclerView3.viewRangeUpdate(i14, i15, obj);
                recyclerView3.mItemsChanged = true;
            } else if (i6 == 8) {
                a1Var.a(aVar);
                int i16 = aVar.f2355b;
                int i17 = aVar.f2357d;
                RecyclerView recyclerView4 = a1Var.a;
                recyclerView4.offsetPositionRecordsForMove(i16, i17);
                recyclerView4.mItemsAddedOrRemoved = true;
            }
        }
        k(arrayList);
        this.f2255f = 0;
    }

    public final void d(a aVar) {
        int i5;
        Pools$SimplePool pools$SimplePool;
        int i6 = aVar.a;
        if (i6 == 1 || i6 == 8) {
            throw new IllegalArgumentException("should not dispatch add or move for pre layout");
        }
        int l6 = l(aVar.f2355b, i6);
        int i10 = aVar.f2355b;
        int i11 = aVar.a;
        if (i11 == 2) {
            i5 = 0;
        } else {
            if (i11 != 4) {
                throw new IllegalArgumentException("op should be remove or update." + aVar);
            }
            i5 = 1;
        }
        int i12 = 1;
        int i13 = 1;
        while (true) {
            int i14 = aVar.f2357d;
            pools$SimplePool = this.a;
            if (i12 >= i14) {
                break;
            }
            int l7 = l((i5 * i12) + aVar.f2355b, aVar.a);
            int i15 = aVar.a;
            if (i15 == 2 ? l7 != l6 : !(i15 == 4 && l7 == l6 + 1)) {
                a h6 = h(aVar.f2356c, i15, l6, i13);
                e(h6, i10);
                h6.f2356c = null;
                pools$SimplePool.release(h6);
                if (aVar.a == 4) {
                    i10 += i13;
                }
                i13 = 1;
                l6 = l7;
            } else {
                i13++;
            }
            i12++;
        }
        Object obj = aVar.f2356c;
        aVar.f2356c = null;
        pools$SimplePool.release(aVar);
        if (i13 > 0) {
            a h7 = h(obj, aVar.a, l6, i13);
            e(h7, i10);
            h7.f2356c = null;
            pools$SimplePool.release(h7);
        }
    }

    public final void e(a aVar, int i5) {
        a1 a1Var = this.f2253d;
        a1Var.a(aVar);
        int i6 = aVar.a;
        if (i6 == 2) {
            int i10 = aVar.f2357d;
            RecyclerView recyclerView = a1Var.a;
            recyclerView.offsetPositionRecordsForRemove(i5, i10, true);
            recyclerView.mItemsAddedOrRemoved = true;
            recyclerView.mState.f2328c += i10;
            return;
        }
        if (i6 != 4) {
            throw new IllegalArgumentException("only remove and update ops can be dispatched in first pass");
        }
        int i11 = aVar.f2357d;
        Object obj = aVar.f2356c;
        RecyclerView recyclerView2 = a1Var.a;
        recyclerView2.viewRangeUpdate(i5, i11, obj);
        recyclerView2.mItemsChanged = true;
    }

    public final int f(int i5, int i6) {
        ArrayList arrayList = this.f2252c;
        int size = arrayList.size();
        while (i6 < size) {
            a aVar = (a) arrayList.get(i6);
            int i10 = aVar.a;
            if (i10 == 8) {
                int i11 = aVar.f2355b;
                if (i11 == i5) {
                    i5 = aVar.f2357d;
                } else {
                    if (i11 < i5) {
                        i5--;
                    }
                    if (aVar.f2357d <= i5) {
                        i5++;
                    }
                }
            } else {
                int i12 = aVar.f2355b;
                if (i12 > i5) {
                    continue;
                } else if (i10 == 2) {
                    int i13 = aVar.f2357d;
                    if (i5 < i12 + i13) {
                        return -1;
                    }
                    i5 -= i13;
                } else if (i10 == 1) {
                    i5 += aVar.f2357d;
                }
            }
            i6++;
        }
        return i5;
    }

    public final boolean g() {
        return this.f2251b.size() > 0;
    }

    public final a h(Object obj, int i5, int i6, int i10) {
        a aVar = (a) this.a.acquire();
        if (aVar != null) {
            aVar.a = i5;
            aVar.f2355b = i6;
            aVar.f2357d = i10;
            aVar.f2356c = obj;
            return aVar;
        }
        a aVar2 = new a();
        aVar2.a = i5;
        aVar2.f2355b = i6;
        aVar2.f2357d = i10;
        aVar2.f2356c = obj;
        return aVar2;
    }

    public final void i(a aVar) {
        this.f2252c.add(aVar);
        int i5 = aVar.a;
        a1 a1Var = this.f2253d;
        if (i5 == 1) {
            int i6 = aVar.f2355b;
            int i10 = aVar.f2357d;
            RecyclerView recyclerView = a1Var.a;
            recyclerView.offsetPositionRecordsForInsert(i6, i10);
            recyclerView.mItemsAddedOrRemoved = true;
            return;
        }
        if (i5 == 2) {
            int i11 = aVar.f2355b;
            int i12 = aVar.f2357d;
            RecyclerView recyclerView2 = a1Var.a;
            recyclerView2.offsetPositionRecordsForRemove(i11, i12, false);
            recyclerView2.mItemsAddedOrRemoved = true;
            return;
        }
        if (i5 == 4) {
            int i13 = aVar.f2355b;
            int i14 = aVar.f2357d;
            Object obj = aVar.f2356c;
            RecyclerView recyclerView3 = a1Var.a;
            recyclerView3.viewRangeUpdate(i13, i14, obj);
            recyclerView3.mItemsChanged = true;
            return;
        }
        if (i5 != 8) {
            throw new IllegalArgumentException("Unknown update op type for " + aVar);
        }
        int i15 = aVar.f2355b;
        int i16 = aVar.f2357d;
        RecyclerView recyclerView4 = a1Var.a;
        recyclerView4.offsetPositionRecordsForMove(i15, i16);
        recyclerView4.mItemsAddedOrRemoved = true;
    }

    /* JADX WARN: Removed duplicated region for block: B:119:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:123:0x008c  */
    /* JADX WARN: Removed duplicated region for block: B:125:0x009a  */
    /* JADX WARN: Removed duplicated region for block: B:127:0x009f A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:130:0x0007 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:131:0x0090  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0121 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:95:0x0114 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void j() {
        ArrayList arrayList;
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        a h6;
        int i13;
        int i14;
        a h7;
        boolean z5;
        boolean z6;
        Object obj;
        a aVar;
        q0 q0Var = this.f2254e;
        q0Var.getClass();
        while (true) {
            arrayList = this.f2251b;
            i5 = 1;
            int size = arrayList.size() - 1;
            boolean z7 = false;
            while (true) {
                i6 = 8;
                if (size < 0) {
                    size = -1;
                    break;
                }
                if (((a) arrayList.get(size)).a != 8) {
                    z7 = true;
                } else if (z7) {
                    break;
                }
                size--;
            }
            if (size == -1) {
                break;
            }
            int i15 = size + 1;
            AdapterHelper adapterHelper = q0Var.a;
            Pools$SimplePool pools$SimplePool = adapterHelper.a;
            a aVar2 = (a) arrayList.get(size);
            a aVar3 = (a) arrayList.get(i15);
            int i16 = aVar3.a;
            if (i16 == 1) {
                int i17 = aVar2.f2357d;
                int i18 = aVar3.f2355b;
                int i19 = i17 < i18 ? -1 : 0;
                int i20 = aVar2.f2355b;
                if (i20 < i18) {
                    i19++;
                }
                if (i18 <= i20) {
                    aVar2.f2355b = i20 + aVar3.f2357d;
                }
                int i21 = aVar3.f2355b;
                if (i21 <= i17) {
                    aVar2.f2357d = i17 + aVar3.f2357d;
                }
                aVar3.f2355b = i21 + i19;
                arrayList.set(size, aVar3);
                arrayList.set(i15, aVar2);
            } else if (i16 == 2) {
                int i22 = aVar2.f2355b;
                int i23 = aVar2.f2357d;
                if (i22 < i23) {
                    z6 = aVar3.f2355b == i22 && aVar3.f2357d == i23 - i22;
                    z5 = false;
                } else if (aVar3.f2355b == i23 + 1 && aVar3.f2357d == i22 - i23) {
                    z6 = true;
                    z5 = true;
                } else {
                    z5 = true;
                    z6 = false;
                }
                int i24 = aVar3.f2355b;
                if (i23 < i24) {
                    aVar3.f2355b = i24 - 1;
                } else {
                    int i25 = aVar3.f2357d;
                    if (i23 < i24 + i25) {
                        aVar3.f2357d = i25 - 1;
                        aVar2.a = 2;
                        aVar2.f2357d = 1;
                        if (aVar3.f2357d == 0) {
                            arrayList.remove(i15);
                            aVar3.f2356c = null;
                            pools$SimplePool.release(aVar3);
                        }
                    }
                }
                int i26 = aVar2.f2355b;
                int i27 = aVar3.f2355b;
                if (i26 <= i27) {
                    aVar3.f2355b = i27 + 1;
                } else {
                    int i28 = i27 + aVar3.f2357d;
                    if (i26 < i28) {
                        obj = null;
                        a h10 = adapterHelper.h(null, 2, i26 + 1, i28 - i26);
                        aVar3.f2357d = aVar2.f2355b - aVar3.f2355b;
                        aVar = h10;
                        if (z6) {
                            if (z5) {
                                if (aVar != null) {
                                    int i29 = aVar2.f2355b;
                                    if (i29 > aVar.f2355b) {
                                        aVar2.f2355b = i29 - aVar.f2357d;
                                    }
                                    int i30 = aVar2.f2357d;
                                    if (i30 > aVar.f2355b) {
                                        aVar2.f2357d = i30 - aVar.f2357d;
                                    }
                                }
                                int i31 = aVar2.f2355b;
                                if (i31 > aVar3.f2355b) {
                                    aVar2.f2355b = i31 - aVar3.f2357d;
                                }
                                int i32 = aVar2.f2357d;
                                if (i32 > aVar3.f2355b) {
                                    aVar2.f2357d = i32 - aVar3.f2357d;
                                }
                            } else {
                                if (aVar != null) {
                                    int i33 = aVar2.f2355b;
                                    if (i33 >= aVar.f2355b) {
                                        aVar2.f2355b = i33 - aVar.f2357d;
                                    }
                                    int i34 = aVar2.f2357d;
                                    if (i34 >= aVar.f2355b) {
                                        aVar2.f2357d = i34 - aVar.f2357d;
                                    }
                                }
                                int i35 = aVar2.f2355b;
                                if (i35 >= aVar3.f2355b) {
                                    aVar2.f2355b = i35 - aVar3.f2357d;
                                }
                                int i36 = aVar2.f2357d;
                                if (i36 >= aVar3.f2355b) {
                                    aVar2.f2357d = i36 - aVar3.f2357d;
                                }
                            }
                            arrayList.set(size, aVar3);
                            if (aVar2.f2355b != aVar2.f2357d) {
                                arrayList.set(i15, aVar2);
                            } else {
                                arrayList.remove(i15);
                            }
                            if (aVar != null) {
                                arrayList.add(size, aVar);
                            }
                        } else {
                            arrayList.set(size, aVar3);
                            arrayList.remove(i15);
                            aVar2.f2356c = obj;
                            pools$SimplePool.release(aVar2);
                        }
                    }
                }
                obj = null;
                aVar = null;
                if (z6) {
                }
            } else if (i16 == 4) {
                int i37 = aVar2.f2357d;
                int i38 = aVar3.f2355b;
                if (i37 < i38) {
                    aVar3.f2355b = i38 - 1;
                } else {
                    int i39 = aVar3.f2357d;
                    if (i37 < i38 + i39) {
                        aVar3.f2357d = i39 - 1;
                        h6 = adapterHelper.h(aVar3.f2356c, 4, aVar2.f2355b, 1);
                        i13 = aVar2.f2355b;
                        i14 = aVar3.f2355b;
                        if (i13 > i14) {
                            aVar3.f2355b = i14 + 1;
                        } else {
                            int i40 = i14 + aVar3.f2357d;
                            if (i13 < i40) {
                                int i41 = i40 - i13;
                                h7 = adapterHelper.h(aVar3.f2356c, 4, i13 + 1, i41);
                                aVar3.f2357d -= i41;
                                arrayList.set(i15, aVar2);
                                if (aVar3.f2357d > 0) {
                                    arrayList.set(size, aVar3);
                                } else {
                                    arrayList.remove(size);
                                    aVar3.f2356c = null;
                                    pools$SimplePool.release(aVar3);
                                }
                                if (h6 != null) {
                                    arrayList.add(size, h6);
                                }
                                if (h7 != null) {
                                    arrayList.add(size, h7);
                                }
                            }
                        }
                        h7 = null;
                        arrayList.set(i15, aVar2);
                        if (aVar3.f2357d > 0) {
                        }
                        if (h6 != null) {
                        }
                        if (h7 != null) {
                        }
                    }
                }
                h6 = null;
                i13 = aVar2.f2355b;
                i14 = aVar3.f2355b;
                if (i13 > i14) {
                }
                h7 = null;
                arrayList.set(i15, aVar2);
                if (aVar3.f2357d > 0) {
                }
                if (h6 != null) {
                }
                if (h7 != null) {
                }
            }
        }
        int size2 = arrayList.size();
        int i42 = 0;
        while (i42 < size2) {
            a aVar4 = (a) arrayList.get(i42);
            int i43 = aVar4.a;
            if (i43 != i5) {
                Pools$SimplePool pools$SimplePool2 = this.a;
                a1 a1Var = this.f2253d;
                if (i43 != 2) {
                    if (i43 == 4) {
                        int i44 = aVar4.f2355b;
                        int i45 = aVar4.f2357d + i44;
                        int i46 = i44;
                        int i47 = -1;
                        int i48 = 0;
                        while (i44 < i45) {
                            if (a1Var.b(i44) != null || a(i44)) {
                                if (i47 == 0) {
                                    d(h(aVar4.f2356c, 4, i46, i48));
                                    i46 = i44;
                                    i48 = 0;
                                }
                                i47 = i5;
                            } else {
                                if (i47 == i5) {
                                    i(h(aVar4.f2356c, 4, i46, i48));
                                    i46 = i44;
                                    i48 = 0;
                                }
                                i47 = 0;
                            }
                            i48 += i5;
                            i44++;
                        }
                        if (i48 != aVar4.f2357d) {
                            Object obj2 = aVar4.f2356c;
                            aVar4.f2356c = null;
                            pools$SimplePool2.release(aVar4);
                            aVar4 = h(obj2, 4, i46, i48);
                        }
                        if (i47 == 0) {
                            d(aVar4);
                        } else {
                            i(aVar4);
                        }
                    } else if (i43 == i6) {
                        i(aVar4);
                    }
                    i10 = i5;
                } else {
                    int i49 = aVar4.f2355b;
                    int i50 = aVar4.f2357d + i49;
                    int i51 = i49;
                    int i52 = -1;
                    int i53 = 0;
                    while (i51 < i50) {
                        if (a1Var.b(i51) != null || a(i51)) {
                            i11 = i5;
                            if (i52 == 0) {
                                d(h(null, 2, i49, i53));
                                i12 = i11;
                            } else {
                                i12 = 0;
                            }
                            i52 = i11;
                        } else {
                            i11 = i5;
                            if (i52 == i5) {
                                i(h(null, 2, i49, i53));
                                i12 = i11;
                            } else {
                                i12 = 0;
                            }
                            i52 = 0;
                        }
                        if (i12 != 0) {
                            i51 -= i53;
                            i50 -= i53;
                            i53 = i11;
                        } else {
                            i53++;
                        }
                        i51++;
                        i5 = i11;
                    }
                    i10 = i5;
                    if (i53 != aVar4.f2357d) {
                        aVar4.f2356c = null;
                        pools$SimplePool2.release(aVar4);
                        aVar4 = h(null, 2, i49, i53);
                    }
                    if (i52 == 0) {
                        d(aVar4);
                    } else {
                        i(aVar4);
                    }
                }
            } else {
                i10 = i5;
                i(aVar4);
            }
            i42++;
            i5 = i10;
            i6 = 8;
        }
        arrayList.clear();
    }

    public final void k(ArrayList arrayList) {
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            a aVar = (a) arrayList.get(i5);
            aVar.f2356c = null;
            this.a.release(aVar);
        }
        arrayList.clear();
    }

    public final int l(int i5, int i6) {
        int i10;
        int i11;
        ArrayList arrayList = this.f2252c;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            a aVar = (a) arrayList.get(size);
            int i12 = aVar.a;
            if (i12 == 8) {
                int i13 = aVar.f2355b;
                int i14 = aVar.f2357d;
                if (i13 < i14) {
                    i11 = i13;
                    i10 = i14;
                } else {
                    i10 = i13;
                    i11 = i14;
                }
                if (i5 < i11 || i5 > i10) {
                    if (i5 < i13) {
                        if (i6 == 1) {
                            aVar.f2355b = i13 + 1;
                            aVar.f2357d = i14 + 1;
                        } else if (i6 == 2) {
                            aVar.f2355b = i13 - 1;
                            aVar.f2357d = i14 - 1;
                        }
                    }
                } else if (i11 == i13) {
                    if (i6 == 1) {
                        aVar.f2357d = i14 + 1;
                    } else if (i6 == 2) {
                        aVar.f2357d = i14 - 1;
                    }
                    i5++;
                } else {
                    if (i6 == 1) {
                        aVar.f2355b = i13 + 1;
                    } else if (i6 == 2) {
                        aVar.f2355b = i13 - 1;
                    }
                    i5--;
                }
            } else {
                int i15 = aVar.f2355b;
                if (i15 <= i5) {
                    if (i12 == 1) {
                        i5 -= aVar.f2357d;
                    } else if (i12 == 2) {
                        i5 += aVar.f2357d;
                    }
                } else if (i6 == 1) {
                    aVar.f2355b = i15 + 1;
                } else if (i6 == 2) {
                    aVar.f2355b = i15 - 1;
                }
            }
        }
        for (int size2 = arrayList.size() - 1; size2 >= 0; size2--) {
            a aVar2 = (a) arrayList.get(size2);
            int i16 = aVar2.a;
            Pools$SimplePool pools$SimplePool = this.a;
            if (i16 == 8) {
                int i17 = aVar2.f2357d;
                if (i17 == aVar2.f2355b || i17 < 0) {
                    arrayList.remove(size2);
                    aVar2.f2356c = null;
                    pools$SimplePool.release(aVar2);
                }
            } else if (aVar2.f2357d <= 0) {
                arrayList.remove(size2);
                aVar2.f2356c = null;
                pools$SimplePool.release(aVar2);
            }
        }
        return i5;
    }
}
