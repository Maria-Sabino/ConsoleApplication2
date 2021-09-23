// ConsoleApplication2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

public class Produto{

	//construtor passondo o parametro
	public string_nome;
	public double Preco {
		get; privateset;
	}
	public double Quantidade {
		get; privateset;
	}
	public Produto()
	{}publicProduto(stringnome, doublepreco, intquantidade) {_nome = nome; Preco = preco; Quantidade = quantidade;} 
	public string Nome {
		get{
			return_nome; 
	}
	set {
		if (value != null && value.Leght > 1) {
			_nome = value; 
		}
	}
		//metodos para retornar os valores
	
	public double ValorTotalEmEstoque() { 
		get{
			returnPreco * Quantidade; 
		} 
	}
	public void AdicionarProdutos(intquantidade) {
		Quantidade += quantidade; 
	}
public voidR emoverProdutos(intquantidade) { 
	Quantidade -= quantidade; 
}
public overrides tringToString() {
	return_nome
		+ “, $ ”
		+ _preco.ToString(“F2”, CultureInfo.InvariantCulture);
	+“,  ” + “, quantidade ” 
		+ “ unidades, Total: $ ”
		+ ValorTotalEmEstoque().ToString(“F2”, CultureInfo.InvarianteCulture); }
	}